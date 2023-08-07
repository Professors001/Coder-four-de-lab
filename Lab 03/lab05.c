#include <stdio.h>
#include <stdlib.h>

int main() {
    char in_str[3];
    int min = 97,max = 122,in = 0;
    fgets(in_str, 3, stdin);
    in = atoi(in_str);
    if ((in > 0) && (in <= 26)) {
        in = (in + min)-1;
        max = in;
        while(in > min) {
            printf("%c-",in);
            in--;
        }
        if (in == min) {
            printf("%c",min);
        }
        min = min + 1;
        while(max >= min) {
            printf("-%c",min);
            min++;
        }
        }
    else {
        printf("-");
    }
    return 0;
}