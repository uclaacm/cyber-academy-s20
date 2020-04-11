#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char * messages[10] = {
    "Name the dog: ",
    "What type of dog is it: ",
    "No, you're wrong. He's a corgi.\n",
    "Yes, he's a corgi. A very beautiful corgi.\n",
    "Feed him something: ",
    "How could you feed him that? Are you trying to kill him? You monster.\n",
    "Yum yum. Corgi is happy. Thank you for the meal.\n",
    "Mmmh. Tasty. More fooood.\n",
    "Another! Corgi still hungry.\n",
    "Okay. Corgi not hungry anymore\n"
};

void fine() {
    printf("%c", messages[6][35]);
    printf("%c", messages[3][34]);
    printf("%c", messages[2][23]);
    printf("%c", messages[0][11]);
    printf("%c", messages[4][18]);
    printf("%c", messages[1][4]);
    printf("%c", messages[3][26]);
    printf("%c", messages[5][6]);
    printf("%c", messages[0][5]);
    printf("%c", messages[1][21]);
    printf("%c", messages[2][16]);
    printf("%c", messages[6][16]);
    printf("%c", messages[3][12]);
    printf("%c", messages[2][1]);
    printf("%c", messages[3][37]);
    printf("%c", messages[3][13]);
    printf("%c", messages[4][13]);
    printf("%c", messages[4][9]);
    printf("\n");
    exit(0);
}

int main() {
    int hungry = 1;
    char buffer[256];
    memset(buffer, 0, 256);
    printf("%s", messages[0]);
    scanf("%s", buffer);
    printf("Hi, %s the dog!\n", buffer);

    printf("%s", messages[1]);
    memset(buffer, 0, 256);
    scanf("%s", buffer);
    
    if (strcmp(buffer, "corgi") == 0) {
        printf("%s", messages[3]);

        while (hungry) {
            printf("%s", messages[4]);
            memset(buffer, 0, 256);
            scanf("%s", buffer);
            
            if (strcmp(buffer, "grapes") == 0) {
                printf("%s", messages[5]);
                hungry = 0;
                fine();
            }
            else {
                if (strcmp(buffer, "bone") == 0) {
                    printf("%s", messages[7]);
                }
                else {
                    if (strcmp(buffer, "food") == 0) {
                        printf("%s", messages[9]);
                        hungry = 0;
                    }
                    else {
                        printf("%s", messages[8]);
                    }
                }
            }
        }

        printf("%s", messages[6]);
        exit(0);
    } else {
        printf("%s", messages[2]);
    }

    printf("Corgi is hungry.\n");
    printf("Give corgi food.\n");
    printf("Corgi likes food.\n");
    printf("Don't kill the corgi though.\n");
}
