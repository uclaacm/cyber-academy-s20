#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<signal.h>

#define BUFSIZE 32
#define FLAGSIZE 64

void success(){

  char flag[FLAGSIZE];
  FILE *f = fopen("/ctf/flag.txt", "r");


  if(f == NULL){
    printf("Problem getting the flag, please contact admin\n");
    exit(0);
  }

  fgets(flag,FLAGSIZE,f);
  fprintf(stderr, "%s\n", flag);
  fflush(stderr);
  exit(0);
}

void vuln(){
  char buf[BUFSIZE];
  printf("Hmmm, how about trying to get to success: \n");
  gets(buf);
  printf("You entered: %s\n", buf);    
  
}


int main(int argc, char **argv){
  setbuf(stdout, NULL);


  vuln();
  
  return 0;
}
  



