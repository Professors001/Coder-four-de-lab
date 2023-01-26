#include <stdio.h>
#include <stdlib.h>

int main() {
  char c;
  c = getchar();
  int ascii = (int)(c);
  
  if ((ascii >= 48) && (ascii <= 57)) {
    printf("Output: digit");
  }
  else if ((ascii >= 65) && (ascii <= 90)) {
    printf("Output: upper case");
  }
  else if ((ascii >= 97) && (ascii <= 122)) {
    printf("Output: lower case ");
  }
  else {
    printf("Output: others");
  }
  return 0;
}