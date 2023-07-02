#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _box {
    char name[10];
    int score;
}Box;

int main() {
    double sumScore = 0;
    Box stud[5];
    for(int i = 0;i < 5;i++) {
        printf("Name: ");
        fgets(stud[i].name, 10, stdin);
        strtok(stud[i].name, "\n");
        printf("Score: ");
        scanf("\n%d", &stud[i].score);
        sumScore += stud[i].score;
        getchar();
    }
    sumScore /= 5;
    printf("Average = %.2f\n", sumScore);

    for(int i = 0; i < 5;i++) {
        int score = stud[i].score;
        if (score > sumScore) {
           printf("%s %d\n", stud[i].name, stud[i].score);
        }
    }
    return 0;
}