#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<signal.h>

#define FLAGSIZE_MAX 64
#define BUFSIZE 32


//Will give you the flag if you manage to do an overflow
void sigsegvhandler(int sig){

  char flag[FLAGSIZE_MAX];
  setbuf(stdout,NULL);

  //Use absolute path with files
  FILE *f = fopen("/ctf/flag.txt","r");
  if(f == NULL){
    printf("Trouble detecting flag, please contact admin\n");
    exit(0);
  }
  fgets(flag,FLAGSIZE_MAX,f);

  fprintf(stderr, "%s\n", flag);
  fflush(stderr);
  exit(0);
}

//copies thing into buf char
void vuln(){
  char buf[BUFSIZE];
  printf("I see some nice speedy fingers. Use them to enter some text.\n");
  gets(buf);
  printf("You entered: %s\n", buf);
  
}


int main(int argc, char **argv){
  //triggers the SIGSEGV and call sigsegvhandler
  signal(SIGSEGV, sigsegvhandler);

    vuln();
  
  return 0;
}
