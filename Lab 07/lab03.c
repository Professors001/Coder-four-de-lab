#include <stdio.h>

void stringcat(char src[], char dest[])
{
    char temp[100];
    int i = 0, c1 = 0, c2 = 0, max = 0;
    for(c1 = 0; src[c1] != '\0'; c1++);
    for(c2 = 0; dest[c2] != '\0'; c2++);
    max = c1 + c2;
    for(i = 0; i < max; i++) {
        if(i < c2)
            temp[i] = dest[i];
        else
            temp[i] = src[i-c2];
    }
    temp[max] = '\0';
    for(i = 0; i < max; i++) {
        dest[i] = temp[i];
    }
    dest[max] = '\0';
}

int main()
{
  char in1[100],in2[100];

  printf("Input 1: ");
  gets(in1);  /* read a line of characters from the input to "in1" variable */
  printf("Input 2: ");
  gets(in2);  /* read another line of characters from the input to "in2" variable */
  stringcat(in1,in2);
  printf(" Output: ");
  printf("%s\n",in2);
  return 0;
}