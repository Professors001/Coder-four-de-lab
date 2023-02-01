#include <stdio.h>
#include <ctype.h>

int main() {
    char name[10] = "Gordon";
    int x = 10;

    printf("Hello World");
    printf("\n%s", name);

    for(;x >= 0; x--) {
        printf("\n%d", x);
    }

    return 0;
}
