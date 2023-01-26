#include<stdio.h>
int main() {
    int computer_time = 785;
    int day,minute,hour;
    day = computer_time / 1440;
    computer_time = computer_time - (day*1440);
    hour = computer_time / 60;
    computer_time = computer_time - (hour*60);
    minute = computer_time;
    printf("It is %d days %d hours and %d minutes.",day,hour,minute);
}