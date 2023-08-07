#include <stdio.h>

int main()
{   unsigned char x;
    int n;

    printf("Enter an 8-bit number: ");
    scanf("%d", &n);
    x = (unsigned char)n;
    int numbits =
    !!(x & 128) + 
    !!(x & 64) + 
    !!(x & 32) + 
    !!(x & 16) + 
    !!(x & 8) + 
    !!(x & 4) + 
    !!(x & 2) + 
    !!(x & 1);
    printf("The number %d has %d non-zero bits\n", x, numbits);
    return 0;
}