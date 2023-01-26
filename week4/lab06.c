#include <stdio.h>
#include <stdlib.h>

int main() {
     char goal[10],collet[10];
     float fgoal = 0,fcollet = 0,krapok = 0;
     int day = 0;
     printf("Enter your goal amount: ");
     fgets(goal,10,stdin);
     fgoal = atof(goal);
     while(krapok < fgoal) {
          day += 1;
          printf("Enter money collected today: ");
          fgets(collet,10,stdin);
          fcollet = atof(collet);
          krapok += fcollet;
          if (krapok >= fgoal && day == 1) {
               printf("Congratulations! You take %d day to reach your goal.\n",day);
          }
          else if (krapok >= fgoal) {
               printf("Congratulations! You take %d days to reach your goal.\n",day);
          }
          else {
          printf("Total money collected up to day %d is %.2f. You need %.2f more.\n",day,krapok,(fgoal-krapok));
          }
     }
}