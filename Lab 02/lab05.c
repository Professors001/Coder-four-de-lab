#include <stdio.h>
#include <stdlib.h>

void main() {
  char a_str[5],b_str[5],c_str[5];
  int a,b,c;

  printf("Enter length of side A: ");
  fgets(a_str, 5, stdin);

  printf("Enter length of side B: ");
  fgets(b_str, 5, stdin);

  printf("Enter length of side C: ");
  fgets(c_str, 5, stdin);

  a = atoi(a_str);
  b = atoi(b_str);
  c = atoi(c_str);

  if ((a + b <= c) || (a + c <= b) || (b + c <= a) || a <= 0 || b <= 0 || c <= 0) {
    printf("Triangle type is invalid.");
  }
  else {
    if ((a == b) && (b == c)) {
      printf("Triangle type is equilateral.");
    }
    else if ((a == b) || (b == c) || (a == c)) {
      printf("Triangle type is isosceles.");
    }
    else {
      printf("Triangle type is scalene.");
    }
  }
}