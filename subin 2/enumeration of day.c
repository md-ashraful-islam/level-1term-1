#include<stdio.h>
enum DAY {SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};

int main()
{
    enum DAY today;

    today=FRIDAY;

    switch(today)
    {
        case SUNDAY:
            printf("Today is SUNDAY.It is a work day.\n");
            break;
        case MONDAY:
            printf("Today is MONDAY.It is a work day.\n");
            break;
        case TUESDAY:
            printf("Today is TUESDAY.It is a work day.\n");
            break;
        case WEDNESDAY:
            printf("Today is WEDNESDAY.It is a work day.\n");
            break;
        case THURSDAY:
            printf("Today is THURSDAY.It is a work day.\n");
            break;
        case FRIDAY:
            printf("Today is FRIDAY.It is a holiday day.\n");
            break;
        case SATURDAY:
            printf("Today is SATURDAY.It is a holiday day.\n");
            break;
    }

    return 0;
}
