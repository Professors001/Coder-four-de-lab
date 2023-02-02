#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char* stoupper(const char *str) {
    int len = 0;
    for(; str[len] != '\0'; len++);
    char *new_str = (char*) malloc(100);
    for(int i = 0; i < len; i++) {
        new_str[i] = toupper(str[i]);
    }
    new_str[len] = '\0';
    return new_str;
}

int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
        if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}