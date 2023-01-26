#include<stdio.h>

void main() {
    int amount = 50;
    int t50 ,t20 ,t5 ,t1 ,left;
    t50 = amount / 50;
    left = amount - (50 * t50);
    t20 = left / 20;
    left = left - (20 * t20);
    t5 = left / 5;
    left = left - (5 * t5);
    t1 = left;
    printf("1: %d\n5: %d\n20: %d\n50: %d",t1 ,t5 ,t20 ,t50);
}