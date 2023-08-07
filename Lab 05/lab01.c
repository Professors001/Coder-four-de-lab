#include <stdio.h>

int main() 
{
    int check = 1;
    long long n = 0,target = 0,n_clone = 0;
    printf("Input n = ");
    scanf("%lld", &n);
    target = n;
    n_clone = n;
    n = (n * n);
    printf("n^2 = %lld\n",n);
    while (target > 0)
    {
        int x = 0,last_n = 0;
        x = target % 10;
        last_n = n % 10;
        target /= 10;
        n /= 10;
        if (x != last_n)
        {
            check = 0;
        }
    }
    if (check == 1)
    {
        printf("Yes. %lld is automorphic number.",n_clone);
    }
    else
    {
        printf("No. %lld is not automorphic number.",n_clone);
    }
    return 0;
}