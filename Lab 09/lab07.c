#include <stdio.h>

double findAverage(char *filename)
{
    double all, people, temp;
    FILE *f_PTR = fopen(filename, "r");
    while(fscanf(f_PTR, "%lf ", &temp) != EOF) {
        all += temp;
        people += 1;
    }
    return (all / people);
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}