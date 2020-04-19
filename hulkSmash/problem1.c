#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<signal.h>

#define FLAGSIZE_MAX 64



//Will give you the flag if you manage to do an overflow
void sigsegvhandler(int sig){
  printf("This was triggered");

  char flag[FLAGSIZE_MAX];
  setbuf(stdout,NULL);

  //Use absolute path with files
  FILE *f = fopen("/ctf/flag.txt","r");
  if(f == NULL){
    printf("Trouble detecting flag, please contact admin");
  }
  fgets(flag,FLAGSIZE_MAX,f);

  fprintf(stderr, "%s\n", flag);
  fflush(stderr);
  exit(0);
}

//copies thing into buf char
void vuln(char *input){
  char buf[32];
  strcpy(buf,input);
}


int main(int argc, char **argv){
  //triggers the SIGSEGV and call sigsegvhandler
  signal(SIGSEGV, sigsegvhandler);

  if(argc > 1){
    vuln(argv[1]);
    printf("I see some nice speedy fingers. You entered: %s\n", argv[1]);
    
  }
  //check if the user insert an argument
  else{
    printf("This program takes 1 argument.\n");
    printf("Hint: Try to give it a really really long input!\n");
  }

  return 0;
}
