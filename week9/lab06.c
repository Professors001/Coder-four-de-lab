#include <stdio.h>

int main()
{   unsigned char x;
    int n;

    printf("Enter an 8-bit number: ");
    scanf("%d", &n);
    x = (unsigned char)n;
    int numbits = 
    !!(x & 0x01) + 
    !!(x & 0x02) + 
    !!(x & 0x04) + 
    !!(x & 0x08) + 
    !!(x & 0x10) + 
    !!(x & 0x20) + 
    !!(x & 0x40) + 
    !!(x & 0x80);
    
    printf("The number %d has %d non-zero bits\n", x, numbits);
    return 0;
}