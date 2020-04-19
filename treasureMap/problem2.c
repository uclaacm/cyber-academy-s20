#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<signal.h>

#define BUFSIZE 32
#define FLAGSIZE 64

void success(){

  setbuf(stdout,NULL);
  char flag[FLAGSIZE];
  FILE *f = fopen("/ctf/flag.txt", "r");


  if(f == NULL){
    printf("Problem getting the flag, please contact admin");
    exit(0);
  }

  fgets(flag,FLAGSIZE,f);
  fprintf(stderr, "%s\n", flag);
  fflush(stderr);
  exit(0);
}

void vuln(){
  char buf[BUFSIZE];
  printf("Enter some text: \n");
  scanf("%s", buf);
  printf("You entered: %s\n", buf);    
  
}


int main(int argc, char **argv){

  vuln();
  
  return 0;
}
  



