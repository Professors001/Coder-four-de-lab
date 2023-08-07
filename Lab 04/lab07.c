#include <stdio.h>
#include <stdlib.h>

int main() {
     char snum[5];
     int num = 0,nub = 0,i = 0;
     fgets(snum,5,stdin);
     num = atoi(snum);
     for (nub = 1; nub <= num;nub++) {
          for (i = 1; i <= nub;i++) {
               printf("*");
          }
          printf("\n");
     }
     for (nub = nub-2; nub >= 1;nub--) {
          for (i = 1; i <= nub;i++) {
               printf("*");
          }
          printf("\n");
     }
}