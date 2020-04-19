#include <stdlib.h>
#include <stdio.h>

#define FLAGSIZE 64

int printflag() {
    char buf[FLAGSIZE];
    // Disable output buffering
    setbuf(stdout, NULL);
    FILE *f = fopen("/ctf/flag.txt","r");
    if (f == NULL) {
    printf("Flag File is Missing. Problem is Misconfigured, please contact an Admin if you are running this on the shell server.\n");
    exit(0);
    }
    fgets(buf,FLAGSIZE,f);
    printf(buf);
}

void vuln() {
    char str[16];
    int flag = 0;
    printf("Dare you to not look at the source code to figure this one out. So tell me... what's the answer? \n");
    gets(str);
    if(flag == 42) {
        printflag();
    }
    else {
        printf("Your answer wasn't right, but I suppose I'd far rather be happy than right any day. Goodbye!\n");
    }
}

int main(int argc, char** argv) {
    vuln();
    return 0;
}