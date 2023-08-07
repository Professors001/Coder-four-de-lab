#include <stdio.h>
#include <stdlib.h>

char center(int n,int key) {
     int i = 0;
     for(i = 1; i <= n; i++) {
          if (i == 1) {
               printf("*");
          }
          else if (i == n) {
               printf("*\n");
          }
          else if (key == 1) {
               printf("*");
          }
          else {
               printf(" ");
          }
     }

}

int main() {
     char str_a[5],str_b[5];
     int count = 0,space = 0,a = 0,b = 0,key = 0;
     fgets(str_a,5,stdin);
     fgets(str_b,5,stdin);
     a = atoi(str_a);
     b = atoi(str_b);
     for (count = 1; count <= b; count++) {
          if (count > 1) {
               for (space = 0; space < count - 1; space++) {
                    printf(" ");
               }
          }
          if (count == 1 || count == b) {
               key = 1;
          }
          else {
               key = 0;
          }
          center(a,key);
     }
}