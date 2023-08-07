#include <stdio.h>

void triangle_x_keed(int n)
{
    for(int i = 1; i <= n; i ++)
    {
        if ((i % 2) == 0)
        {
            printf("x");
        }
        else
        {
            printf("-");
        }
    }
}

int main() 
{
    int n = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n > 1)
    {
        for(int x = 1; x <= n; x++)
        {
            triangle_x_keed(x);
            printf("\n");
        }
        for(int x = (n-1); x >= 1; x--)
        {
            triangle_x_keed(x);
            if(x != 1)
            {
                printf("\n");
            }
        }
    }
    else
    {
        printf("-");
    }
}