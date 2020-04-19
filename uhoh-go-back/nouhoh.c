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
    // Disable output buffering
    setbuf(stdout, NULL);

    // Use absolute path with files
    FILE *f = fopen("/ctf/flag.txt","r");
    if (f == NULL) {
        printf("Flag File is Missing. Problem is Misconfigured, please contact an Admin if you are running this on the shell server.\n");
        exit(0);
    }
    printf("I've made a secret function that prints the flag. But you'll never figure out how to run it! Unless.... uh oh..... not a buffer!\n");
    printf("Type your buffer here: ");
    fgets(buf,FLAGSIZE,f);
    vuln();
    return 0;
}