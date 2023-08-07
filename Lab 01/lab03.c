#include<stdio.h>
int main()
{
    float preGrade = 1.75;
    int preCredit = 21;
    int credit = 18;
    float requiredGrade = 2.00;
    float finalGrade,han,t1,t2;
    //2.0 = (1.75 * 21 + fg * 18) / (21 + 18)
    han = preCredit + credit;
    t1 = preGrade * preCredit;
    finalGrade = (requiredGrade * han) - t1;
    finalGrade = finalGrade / credit;
    printf("The GPA this semester should be %.2f",finalGrade);
    return 0;
}