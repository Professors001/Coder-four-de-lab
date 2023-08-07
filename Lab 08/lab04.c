#include <stdio.h>

struct std_score
{
    char id[11];
    int mid, fnl;
};

char calculateGrade(int mid, int fnl) {
    int mix = mid + fnl;
    if(mix >= 80) {
        return 'A';
    }
    else if(mix >= 70) {
        return 'B';
    }
    else if(mix >= 60) {
        return 'C';
    }
    else if(mix >= 50) {
        return 'D';
    }
    else if(mix < 50) {
        return 'F';
    }
}

int main() {
    struct std_score ls[5];
    for(int i = 0;i < 5; i++) {
        printf("Enter Student ID: ");
        scanf("%s", ls[i].id);
        printf("Enter Student Midterm: ");
        scanf("%d", &ls[i].mid);
        printf("Enter Student Final: ");
        scanf("%d", &ls[i].fnl);
    }
    for(int i = 0;i < 5; i++) {
        char grade = calculateGrade(ls[i].mid, ls[i].fnl);
        printf("Student ID %s receives grade %c.\n", ls[i].id, grade);
    }
}