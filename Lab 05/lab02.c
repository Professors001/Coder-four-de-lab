#include <stdio.h>
#include <math.h>

int main() 
{
    int mix,n = 0;
    double c_pow,a,b,c;
    scanf("%d", &mix);
    for(a = 1; a <= mix; a++)
    {
        for(b = a; b <= mix; b++)
        {
            c_pow = pow(a, 2) + pow(b, 2);
            c = sqrt(c_pow);
            if((a+b+c) == mix)
            {
                printf("(%.0f, %.0f, %.0f)",a,b,c);
                n = 1;
            }
        }
    }
    if(n==0)
    {
        printf("No triple found.");
    }
    return 0;
}