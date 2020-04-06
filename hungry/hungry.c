#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

char* menu[] = {
    "Beef heart and padron salad",
    "Millet and raisin biscuits",
    "Chocolate and pumpkin cookies",
    "Goat and potato curry",
    "Pheasant and lamb stew",
    "Kiwi fruit and mayonnaise dip",
    "Guava and mascarpone cheesecake",
    "Egg and grapefruit panini",
    "Mutton and banana korma",
    "Sorrel and fennel soup",
    "Angelica and vanilla jam",
    "Taleggio salad with garlic dressing",
    "Maize and chocolate bread",
    "Chickpea and lamb penne",
    "Dolcelatte and chorizo penne",
    "Beef and radish stir fry",
    "Piccalilli and tomato salad",
    "Cardamom and cinnamon cupcakes",
    "Milk and date pudding",
    "Garam masala and chicken pancake"
};

int map[] = { 
    1, 9, 15, 3, 14, 0, 2, 7, 8, 6, 
    4, 5, 18, 17, 19, 13, 10, 11, 16, 12
};

int min(int a, int b) {
    return a < b ? a : b;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int maxProfit(int* prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;
    
    int i = 0;
    while(prices[i]) {
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
        i++;
    }
    
    return maxProfit;
}

void minProfit(int* prices) {
    for (int i = 0; i < 5; i++) {
        prices[i] = map[prices[i]];
    }
}

int set[] = { 9, 19, 5, 1, 7 };

char banner[] = {
    0x20, 0x5f, 0x20, 0x20, 0x20, 0x5f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x0a, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x0a, 0x7c, 0x20, 0x7c, 0x5f, 0x7c, 0x20, 0x7c, 0x5f, 0x20, 0x20, 0x20, 0x5f, 0x20, 0x5f, 0x20, 0x5f, 0x5f, 0x20, 0x20, 0x20, 0x5f, 0x5f, 0x20, 0x5f, 0x20, 0x5f, 0x20, 0x5f, 0x5f, 0x20, 0x5f, 0x20, 0x20, 0x20, 0x5f, 0x20, 0x0a, 0x7c, 0x20, 0x20, 0x5f, 0x20, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x27, 0x5f, 0x20, 0x5c, 0x20, 0x2f, 0x20, 0x5f, 0x60, 0x20, 0x7c, 0x20, 0x27, 0x5f, 0x5f, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x0a, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x5f, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x28, 0x5f, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x20, 0x7c, 0x20, 0x7c, 0x5f, 0x7c, 0x20, 0x7c, 0x0a, 0x5c, 0x5f, 0x7c, 0x20, 0x7c, 0x5f, 0x2f, 0x5c, 0x5f, 0x5f, 0x2c, 0x5f, 0x7c, 0x5f, 0x7c, 0x20, 0x7c, 0x5f, 0x7c, 0x5c, 0x5f, 0x5f, 0x2c, 0x20, 0x7c, 0x5f, 0x7c, 0x20, 0x20, 0x20, 0x5c, 0x5f, 0x5f, 0x2c, 0x20, 0x7c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 0x2f, 0x20, 0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 0x2f, 0x20, 0x7c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x5f, 0x5f, 0x5f, 0x2f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x5f, 0x5f, 0x5f, 0x2f, 0x20, 0
};

int main() {
    printf("===================================================================\n\n");
    printf("%s\n\n", banner);
    printf("===================================================================\n\n");
    printf("If you can plan an amazing 5 course meal, I'll give you the flag.");
    printf("Oh, and I'm afraid of my nemesis copying my menu choices and making me look bad so all your input must be enciphered!\n\n");
    printf("Here's the list of things my chef can cook:\n");

    for (int i = 0; i < 20; i++) {
        printf("    (%c) -- %s\n", 'a' + i, menu[i]);
    }

    char selection[100];
    memset(selection, 0, 100);
    maxProfit(set);
    printf("\nGive me a string of letters corresponding to the meals. No spaces. All lowercase.\nYour selection: ");
    scanf("%5c", selection);

    int plan[5];
    for (int i = 0; i < 5; i++)  {
        plan[i] = selection[i] - 'a';
    }
    minProfit(plan);

    printf("\n===================================================================\n\n");
    printf("The menu tonight:\n");
    for (int i = 0; i < 5; i++) {
        printf("    (%c) -- %s\n", 'a' + plan[i], menu[plan[i]]);
    }

    int yum = 1;
    for (int i = 0; i < 5; i++) {
        if (plan[i] != set[i]) {
            yum = 0;
            break;
        }
    }
    if (yum) {
        char string[100];
        memset(string, 0, 100);
        for (int i = 0; i < 5; i++) {
            sprintf(string+i*2, "%c%c", menu[plan[i]][i], menu[plan[i]][i + 1]);
        }
        printf("\n\nWow amazing. You must be a 5 star chef. This is the flag: %s_%s\n", selection, string);
        printf("Be sure to encase it in flag{...}\n");
    }
    else {
        printf("\n\nYuck! What is this?! Are you trying to embarrass me? We're no trying to feed rats here!\n\n");
    }
}