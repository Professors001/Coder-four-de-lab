#include <stdio.h>
#include <stdlib.h>

int main()
{
  char salary_str[10];
  float salary = 0.0,tax = 0.0;
  //input
  fgets(salary_str,10,stdin);
  //str to float
  salary = atof(salary_str);
  if (salary < 0) {
    printf("Error: Salary must be greater or equal to 0");
  }
  else {
    if (salary <= 300000.0) {
        tax = salary * 0.05;
    }
    else {
        salary = salary - 300000;
        tax = 15000.0 + (salary * 0.10);
    }
    printf("%.2f",tax);
  }
  return 0;
}