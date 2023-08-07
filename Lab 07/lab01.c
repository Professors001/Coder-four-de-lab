#include <stdio.h>

int main() {
    char txt[128];
    int count = 0;
    printf("String (without a space): ");
    scanf("%s", txt);
    for(int i = 0; txt[i] != '\0'; i++) {
        char x = txt[i];
        if (x == 'A' || x == 'a') {
            count += 1;
            printf("%c ", x);
        }
        else if (x == 'E' || x == 'e') {
            count += 1;
            printf("%c ", x);
        }
        else if (x == 'I' || x == 'i') {
            count += 1;
            printf("%c ", x);
        }
        else if (x == 'O' || x == 'o') {
            count += 1;
            printf("%c ", x);
        }
        else if (x == 'U' || x == 'u') {
            count += 1;
            printf("%c ", x);
        }
    }
    if(count > 1)
        printf("\nThis string contains %d vowels.", count);
    else
        printf("\nThis string contains %d vowel.", count);
}
