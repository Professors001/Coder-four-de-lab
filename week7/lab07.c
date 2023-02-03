#include <stdio.h>

void roman2arabic(char input[],char output[])
{
    int i = 0, j = 0;
    char temp;
    while(input[i] != '\0') {
        temp = input[i];
        if (input[i] == 'V' && input[i+1] == 'I' && input[i+2] == 'I' && input[i+3] == 'I') {
            output[j] = '8';
            i+=4;
            j++;
        }
        else if (input[i] == 'I' && input[i+1] == 'I' && input[i+2] == 'I') {
            output[j] = '3';
            i+=3;
            j++;
        }
        else if (input[i] == 'V' && input[i+1] == 'I' && input[i+2] == 'I') {
            output[j] = '7';
            i+=3;
            j++;
        }
        else if (input[i] == 'I' && input[i+1] == 'I') {
            output[j] = '2';
            i+=2;
            j++;
        }
        else if (input[i] == 'I' && input[i+1] == 'V') {
            output[j] = '4';
            i+=2;
            j++;
        }
        else if (input[i] == 'I' && input[i+1] == 'X') {
            output[j] = '9';
            i+=2;
            j++;
        }
        else if (input[i] == 'V' && input[i+1] == 'I') {
            output[j] = '6';
            i+=2;
            j++;
        }
        else if (input[i] == 'I') {
            output[j] = '1';
            i++;
            j++;
        }
        else if (input[i] == 'V') {
            output[j] = '5';
            i++;
            j++;
        }
        else {
            output[j] = input[i];
            i++;
            j++;
        }
        output[j] = temp;
    }
    output[j] = '\0';
}

int main()
{  char input[80],output[80];

   printf(" Input: ");
   gets(input);  /* read a line of characters from the input to "input" variable */

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;
}