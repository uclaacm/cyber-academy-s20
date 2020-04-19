#include <stdlib.h>
#include <stdio.h>

#define FLAGSIZE 64

void hahaha() {
    printf("I guess I'll keep wondering. Goodbye.\n");
}

int printflag(int key) {
    if (key) {
        hahaha();
        return;
    }

    char buf[FLAGSIZE];
    
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
    int b = 1;
    printf("I wonder if I can stop you from seeing the flag with my extra trick. What do you think? \n");
    printf("Go on, type your input: ");
    gets(str);
    printf("You typed in: %s\n", str);
    printflag(b);
    exit(0);
}

int main(int argc, char** argv) {
    // Disable output buffering
    setbuf(stdout, NULL);
    vuln();
    return 0;
}
