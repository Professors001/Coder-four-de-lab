#include <stdio.h>

typedef enum Week { SUN, MON, TUE, WED, THU, FRI, SAT} DayOfWeek;

DayOfWeek findDayOfWeek(int day, int month) {
int days = day;
for(int i = 1; i < month; i++) {
    if(i == 2) {
        days += 28;
    } else if (i == 4 || i == 6 || i == 9 || i == 11) {
        days += 30;
    } else {
        days += 31;
    }
}
return (days + 1) % 7; // +1 Cause to make a start day(1/1) to be a tuesday.
}

int main()
{
	int day, month;
	DayOfWeek dow;

	printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
	printf("Enter Day and Month: ");
	scanf("%d %d", &day, &month);
	dow = findDayOfWeek(day, month);
	printf("Day:%d Month:%d of Year 2013 is ", day, month);
	switch(dow){
		case SUN: printf("Sunday.\n"); break;
		case MON: printf("Monday.\n"); break;
		case TUE: printf("Tuesday.\n"); break;
		case WED: printf("Wednesday.\n"); break;
		case THU: printf("Thursday.\n"); break;
		case FRI: printf("Friday.\n"); break;
		case SAT: printf("Saturday.\n"); break;
	}
}