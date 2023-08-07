#include <stdio.h>

int main() 
{
    int check = 1;
    double num = 0,input_num = 0;
    char str;
    printf("Initial Value: ");
    scanf("%lf", &num);
    while (check)
    {
        printf("\nOperator: ");
        scanf("\n%c", &str);
        switch (str)
        {
        case '+':
            printf("Input Value: ");
            scanf("\n%lf", &input_num);
            num += input_num;
            break;
        case '-':
            printf("Input Value: ");
            scanf("\n%lf", &input_num);
            num -= input_num;
            break;
        case '*':
            printf("Input Value: ");
            scanf("\n%lf", &input_num);
            num *= input_num;
            break;
        case '/':
            printf("Input Value: ");
            scanf("\n%lf", &input_num);
            num /= input_num;
            break;
        default:
            check = 0;
            break;
        }
        if (check)
        {
            printf("Present Value is %.4lf\n",num);
        }
        else
        {
            printf("\nFinish Calculation. Final Value is %.4lf",num);
        }
    }

    return 0;
}