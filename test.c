#include <stdio.h>

void roman2arabic(char input[],char output[])
{
    int i = 0, n = 0; 
    for(; input[i] != '\0'; i++) {
        char x = input[i];
        if(x == 'I' || x == 'V') {
            n += 1;
        }
    }
}

int main()
{  char input[80],output[80];

   printf(" Input: ");
   gets(input);  /* read a line of characters from the input to "input" variable */

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;
}