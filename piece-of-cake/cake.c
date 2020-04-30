#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

char heh[20] = {
    0x62, 0x35, 0x69, 0x58, 0x5d, 0x29, 0x54, 0x58, 0x5d, 0x28, 0x28, 0x68, 0x19, 0x58, 0x29, 0x60, 0x1b, 0x54, 0x31, 0x28
};

int main() {
    printf("What's your favorite kind of cake?\n");

    char yum[11] = { 'm', 'i', 'l', 'l', 'e', ' ', 'c', 'r', 'e', 'p', 'e'};
    char ans[101];
    memset(ans, 0, 101);
    fgets(ans, 100, stdin);

    int i = 0;
    while (ans[i] == yum[i]) {
        i++;
    }
    if (i == 11) {
        for (int j = 0; j < 20; j++) {
            printf("%c", heh[j] + i);
        }
        printf("\n");
    }
    else {
        printf("Nice. I don't like it.\n");
    }
}