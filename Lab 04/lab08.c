#include <stdio.h>
#include <stdlib.h>

void binary(int x) {
    if (x != 0) {
        binary(x / 2);
        printf("%d", x % 2);
    }
}

int main() {
    char snum[11];
    int num = 0;
    fgets(snum,11,stdin);
    num = atoi(snum);
    if (num == 0) {
        printf("0");
    }
    else {
        binary(num);
    }
}