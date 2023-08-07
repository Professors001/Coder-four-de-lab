#include <stdio.h>
#include <stdlib.h>

int power(int i) {
    int x = 1,n = 0;
    while(n < i) {
        x = x * 10;
        n += 1;
    }
    return x;
}
int main() {
    char str_x[3];
    int x = 0,ans = 0,i = 0,k = 0;
    fgets(str_x,3,stdin);
    x = atoi(str_x);
    while(x > 0) {
        k = x % 2;
        x = x / 2;
        ans = ans + (k * power(i));
        i += 1;
    }
    printf("Binary number of %d is %04d.",atoi(str_x),ans);
}