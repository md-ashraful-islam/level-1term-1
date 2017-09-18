#include<stdio.h>

int main()
{
    struct my_type{
        int day;
        int month;
        int year;
    }today,bod;

    struct my_type bod={5,4,2017};
    printf("%d-%d-%d",bod.day,bod.month,bod.year);
    return 0;
}
