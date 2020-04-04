#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char eren[] = {
    0x66, 0x0a, 0x6b, 0x0c, 0x77, 0x19, 0x29, 0x76, 0x46, 0x28, 
    0x4d, 0x12, 0x7b, 0x08, 0x57, 0x24, 0x54, 0x67, 0x04, 0x35, 
    0x54, 0x38, 0x67, 0x09, 0x66, 0x12, 0x4d, 0x28, 0x5e, 0x3b, 
    0x55, 0x0a, 0x73, 0x1c, 0x69, 0x36, 0x0c, 0x25, 0x4f, 0x24, 
    0x7b, 0x02, 0x6d, 0x18, 0x3f, 0x4d, 0x28, 0x77, 0x16, 0x7a, 
    0x08, 0x61, 0x06, 0x6e, 0x1a, 0x67, 0
};

char armin[] = { 'D', 'i', 'n', 'a', 0 };

int compute() {
    int x = 56;
    int y = x ^ 5;
    int z = y * x * 4;
    int k = z / 7;
    int m = z + 2343285238;
    int n = 234038454385345 % 2342;
    int o = (m + n) / 124312432;
    return abs(o);
}

int main() {
    char special[1001];
    memset(special, 0, 1001);

    printf("What are you looking for?\n");
    scanf("%1000s", special);

    if (strcmp(special, "flag") == 0) {
        printf("Hmm. I might be able to do something for you. Let me look in the shelves. Give me 4 seconds...\n");
        sleep(4);
        memset(special, 0, 1001);
        printf("Okay. Found the book. Here's what I need from you. What is the name of the titan that killed Eren's mom?\n");
        scanf("%1000s", special);
        if (strcmp(special, armin) == 0) {
            printf("Correct. Now one last question. Give me a number. It better be correct!\n");
            int num = 0;
            scanf("%d", &num);
            if (num == compute()) {
                printf("You show potential. But not good enough.\n");
                exit(0);
            }
            else {
                printf("You must still be a cadet. Keep learning young one.\n");
                exit(0);
            }
        }
        else {
            printf("Ehhh. %s is not right. You're not really Survey Corps material. Maybe try the Garrison?\n", special);
            exit(0);
        }
    }
    else if (strcmp(special, "flag{") == 0) {
        memset(special, 0, 1001);
        printf("Okay okay. Big shot here I see. Only Survey Corps material can get the flag. What's the code?\n");
        scanf("%1000s", special);
        
        switch (special[0]) {
            case 48:
                printf("Pfft. Not even close. Bye!\n");
                exit(0);
            case 49:
                printf("You're not very creative are you? Guess again.\n");
                exit(0);
            case 50:
                printf("Of course not. Try again.\n");
                exit(0);
            case 51:
                printf("Three is the golden number. Not the code.\n");
                exit(0);
            case 59:
                printf("Oooh. Okay. You're one of those.\n");
                break;
            case 52:
                printf("BZZZZ! Wrong.\n");
                exit(0);
            case 53:
            case 54:
            case 55:
            case 56:
            case 57:
                printf("Okay, I'm tired now. Just no no no no.\n");
                exit(0);
            default:
                printf("Lol. Good luck. There's a faster way to do this.\n");
                exit(0);
        }
    }
    else {
        printf("Huuuh? If %s is all you want, just check the supermarket.ヽ(ｏ`皿′ｏ)ﾉ Stop wasting my time.\n", special);
        exit(0);
    }

    memset(special, 0, 1001);
    printf("Who's special?\n");
    scanf("%999s", special);

    int i = 1;
    while (special[i]) {
        special[i] = special[i] ^ special[i - 1];
        i++;
    }

    printf("\nInput received: ");
    i = 0;
    while (special[i] || special[i + 1]) {
        printf("0x%02x ", special[i]);
        i++;
    }

    printf("\n\n");

    if (strcmp(special, eren) == 0) {
        printf("Hehe! I knew you're good enough for the Survey Corps. What are you waiting for? Submit the flag!\n");
    }
    else {
        printf("Bleh. Wrong. Are you with the Military Police? Lame.\n");
        printf("Here's a hint. There's no spaces.\n");
    }
       
}