#include <stdio.h>
#include <ctype.h>

int main(void) {
    int num_subjects, total_credits = 0, credit;
    double total_grade_points = 0.0, gpa;
    char grade;
    printf("Enter number of subject(s): ");
    scanf("%d", &num_subjects);

    for (int i = 1; i <= num_subjects; i++) 
    {
        printf("Enter credit,grade for subject #%d: ", i);
        scanf("%d,%c", &credit, &grade);
        grade = toupper(grade);
        double grade_points;
        if (grade == 'A') 
        {
            grade_points = 4.0;
        } else if (grade == 'B') 
        {
            grade_points = 3.0;
        } else if (grade == 'C') 
        {
            grade_points = 2.0;
        } else if (grade == 'D') 
        {
            grade_points = 1.0;
        } else 
        {
            grade_points = 0.0;
        }
        total_credits += credit;
        total_grade_points += credit * grade_points;
    }
    gpa = total_grade_points / total_credits;
    printf("GPA = %.2f\n", gpa);
    return 0;
}
