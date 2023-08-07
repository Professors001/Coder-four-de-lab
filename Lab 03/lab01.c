#include <stdio.h>
#include <stdlib.h>

int main() {
    char i[5];
    int x;
    fgets(i, 5,stdin);
    x = atoi(i);
    while (x >= 0)
    {
        printf("%d\n", x);
        x--;
    }
    return 0;
}