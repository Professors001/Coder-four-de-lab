#include <stdio.h>

void stair(int head,int n)
{
    for(int i = n; i >= 1; i--)
    {
        if (i == head)
        {
            printf("|-O-|\n|-^-|\n");
            i -= 1;
        }
        else
        {
            printf("|---|\n");
        }
    }
}

int main() 
{
    int n = 0, i = 1, check = 1,head = 2,num_in = 0, stair_go = 0;
    printf("Input number of stairs: ");
    scanf("%d", &n);
    while (check == 1)
    {
        printf("---- round %d ----\n",i);
        stair(head,n);
        printf("Input step command: ");
        scanf("%d", &num_in);
        if (num_in == 0)
        {
            check = 0;
        }
        else 
        {
            stair_go = num_in + head;
            if (stair_go >= n)
            {
                head = n;
            }
            else if (stair_go <= 2)
            {
                head = 2;
            }
            else
            {
                head = stair_go;
            }
        }
        i ++;
    }
    return 0;
}