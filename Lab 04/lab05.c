#include <stdio.h>
#include <stdlib.h>

void chain(int max, int min) {
    int c = 0;
    c = max;
    while(c > min) {
        printf("%c-",c);
        c--;
    }
    if (c == min) {
        printf("%c",min);
    }
    min = min + 1;
    while(max >= min) {
        printf("-%c",min);
        min++;
    }
}
void keed(int n) {
    int x = 1;
    for (x = 1; x <= n;x++) {
        printf("-");
    }
}

int main() {
    char input[5];
    int num = 0,x = 0,k_nub = 0;
    fgets(input,5,stdin);
    num = atoi(input);
    if (num >= 1 && num <= 26) {
        k_nub = 2 * (num - 1);
        num += 96;
        x = num;
        for(num = num; num >= 97; num--) {
            keed(k_nub);
            chain(x,num);
            keed(k_nub);
            printf("\n");
            k_nub -= 2;
        }
        k_nub += 4;
        for(num = 98; num <= x; num++) {
            keed(k_nub);
            chain(x,num);
            keed(k_nub);
            printf("\n");
            k_nub += 2;
        }
    }
    else {
        printf("-");
    }
}