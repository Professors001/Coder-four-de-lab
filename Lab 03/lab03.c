#include <stdio.h>
#include <stdlib.h>

int main() {
    char str_a[6],str_b[6];
    int a,b,c;
    fgets(str_a, 6,stdin);
    fgets(str_b, 6,stdin);

    a = atoi(str_a);
    b = atoi(str_b);
    c = a / b;
    if ((a % b) == 0) {
        printf("= %d",c);
    }
    else {
        int most,min,hand = 1,c = 0;
        most = a;
        min = b;
        while (min != 0) {
            hand = most % min;
            most = min;
            min = hand;
        }
        a = a / most;
        b = b / most;
        printf("= %d/%d",a,b);
    }
    return 0;
}