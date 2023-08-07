#include <stdio.h>
#include <ctype.h>

int main () 
{
    char p_or_m;
    int hour, minute;
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %c", &hour, &minute, &p_or_m);
    p_or_m = toupper(p_or_m);
    if (p_or_m == 'P' && hour < 12)
    {
        hour += 12;
    }
    else if (p_or_m == 'A' && hour == 12)
    {
        hour = 0;
    }
    printf("Equivalent 24-hour time: %02d:%02d", hour, minute);
}