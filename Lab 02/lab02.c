#include <stdio.h>
#include <stdlib.h>

int main() {
    char star_str[5],money_str[7];
    float money = 0.0,left = 0.0;
    int star = 0,sleft = 0,pc = 0;

    fgets(star_str, 5, stdin);
    fgets(money_str, 7, stdin);

    star = atoi(star_str);
    money = atof(money_str);
    
    if (star >= 9) {
        left = money * 0.60;
        sleft =  star - 9;
        pc = 40;
    }
    else if (star >= 6) {
        left = money * 0.70;
        sleft =  star - 6;
        pc = 30;
    }
    else if (star >= 3) {
        left = money * 0.80;
        sleft =  star - 3;
        pc = 20;
    }
    else if (star >= 2) {
        left = money * 0.85;
        sleft =  star - 2;
        pc = 15;
    }
    else if (star >= 1) {
        left = money * 0.90;
        sleft =  star - 1;
        pc = 10;
    }
    else {
        left = money;
        sleft = 0;
        pc = 0;
    }
    printf("You get %d percents discount.\n",pc);
    printf("Total amount due is %.2f Baht.\n",left);
    printf("And you have %d stickers left.",sleft);
    return 0;
}