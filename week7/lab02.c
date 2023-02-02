#include <stdio.h>

int remove_vowel(char *str)
{
    char str2[80];
    int count = 0, i = 0;
    for(i = 0; str[i] != '\0'; i++) {
        char x = str[i];
        if (x == 'A' || x == 'a' || x == 'E' || x == 'e' || x == 'I' || x == 'i' || x == 'O' || x == 'o' || x == 'U' || x == 'u'){
            continue;
        }
    str2[count] = x;
    count += 1;
    }
    for(i = 0; i <= count; i++) {
        str[i] = str2[i];
    }
    str[count] = '\0';
}

int main()
{  char str[80];

  printf(" Input: ");
  gets(str);

  remove_vowel(str);
  printf("Output: %s\n",str);

  return 0;
}