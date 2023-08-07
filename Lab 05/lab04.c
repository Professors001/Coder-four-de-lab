#include <stdio.h>

int main() 
{
    long n = 0;
    double pie = 4, a = 4, b = 3;
    printf("Enter n: ");
    scanf("%ld", &n);
    for (int i = 1; i < n; i++)
    {
        if ((i % 2) == 1)
        {
            pie = pie - (a/b);
        }
        else
        {
            pie = pie + (a/b);
        }
        b += 2;
    }
    printf("%.10lf\n",pie);
    return 0;
}