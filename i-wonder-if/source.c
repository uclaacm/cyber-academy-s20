#include <stdlib.h>
#include <stdio.h>

#define FLAGSIZE 64

int printflag(int key) {
    if (key)
        return;

    char buf[FLAGSIZE];
    FILE *f = fopen("flag.txt","r");
    if (f == NULL) {
        printf("Flag File is Missing. Problem is Misconfigured, please contact an Admin if you are running this on the shell server.\n");
        exit(0);
    }
    fgets(buf,FLAGSIZE,f);
    printf(buf);
}

void vuln() {
    char str[16];
    int b = 1;
    gets(str);
    printf("You typed in: %s", str);
    printflag(b);
    exit(0);
}

int main(int argc, char** argv) {
    vuln();
    return 0;
}