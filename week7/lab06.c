#include <stdio.h>

int charcount(char *s)
{
    int len = 0;
    for(; s[len] != '\0'; len++);
    return len;
}

void charweave(char *s,char *result)
{
    int len = charcount(s);
    int i = 0, n = len-1, j = 0;
    for(;i < len*2; i++){
        if(i % 2 == 0) {
            result[i] = s[j];
            j++; continue;
        }
        result[i] = s[n];
        n--;
    }
    result[len*2] = '\0';
}

int main()
{  char str[100],result[200];

   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}