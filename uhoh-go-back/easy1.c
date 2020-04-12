#include <stdlib.h>
#include <stdio.h>
#include <signal.h>

#define FLAGSIZE 64

char buf[FLAGSIZE];

int uhoh() {
    printf(buf);
}

void vuln() {
    char str[16];
    gets(str);
    printf("You typed in: %s", str);
}

int main(int argc, char** argv) {
    FILE *f = fopen("flag.txt","r");
    if (f == NULL) {
        printf("Flag File is Missing. Problem is Misconfigured, please contact an Admin if you are running this on the shell server.\n");
        exit(0);
    }
    fgets(buf,FLAGSIZE,f);
    vuln();
    return 0;
}