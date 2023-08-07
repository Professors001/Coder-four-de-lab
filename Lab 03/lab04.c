#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibo(int n)
{
    int c = 0,a = 0,b = 1,p = 0;
    while (c < n) {
        p = a + b;
        a = b;
        b = p;
        c++;
    }
    return a;
}
int main()
{
    char input_n[5];
    fgets(input_n, 5, stdin);
    int n, i;
    n = atoi(input_n);
    for (i = 0; i <= n; i++) {
        printf("F(%d) = %d\n", i,fibo(i));
    }
    return 0;
}