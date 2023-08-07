#include <stdio.h>

struct student
{
    char name[20];
    int score;
};


int main() {
    double mean;
    int totalScore = 0;
    struct student nisit[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter your name : ");
        scanf("%s", nisit[i].name);
        printf("Enter your score : ");
        scanf("%d", &nisit[i].score);
        totalScore += nisit[i].score; 
    }
    mean = totalScore/5.0;
    printf("------------------------------------------");
    printf("more than averange ! (avg is %lf)\n", mean);
    for (int i = 0; i < 5; i++) {
        if (nisit[i].score >= mean)
            printf("Name : %s  score : %d\n", nisit[i].name, nisit[i].score);
    }
}