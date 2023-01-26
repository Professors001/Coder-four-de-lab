#include <stdio.h>
#include <stdlib.h>

int i = 0;
int main() {
    //int j = 0;
    //printf("%d %d\n", i, j);
    // char str[10];
    // fgets(str, 100, stdin);
    // printf("str : %s", str);

    // int i = atoi(str);
    // long l = atol(str);
    // double d = atof(str);

    // printf("%d - %d - %lf\n",i,l,d);
 

    // int isDigit = 0;
    // float isExist = 0.0;
    // char isNumber = "\0";

    // if (isDigit) {
    //     printf("if %d\n", isDigit > 50);
    // }
    // else {
    //     printf("else\n");
    // }

    // char str[10];
    // printf("Enter your score : ");
    // fgets(str, 10, stdin);

    // double score = atof(str);
    //relational oparetors > < <= >= == !=
    // if (score >= 80) {
    //     printf("A\n");
    // }
    // else if (score >= 70) {
    //     printf("B\n");
    // }
    // else {
    //     printf("F\n");
    // }
    // printf("score : %f\n", score);

    // if (score < 50) {
    //     printf("F\n");
    // }
    // else if (score >= 50 && score < 60) {
    //     printf("D\n");
    // }
    // else {
    //     printf("A\n");
    // }
    // printf("score : %.2lf\n", score);
    char str[10];
    printf("Enter your score : ");
    fgets(str, 10, stdin);
    if (str[0] > "a") {
        printf("if\n");
    }
    else {
        printf("else\n");
    }
}