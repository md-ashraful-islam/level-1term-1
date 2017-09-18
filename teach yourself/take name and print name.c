#include<stdio.h>

int main()
{
    int fn[21],mn[21],ln[21];

    printf("Please enter first name: ");
    scanf(" %20s",fn);
    printf("Please enter middle name: ");
    scanf(" %20s",mn);
    printf("Please enter last name: ");
    scanf(" %20s",ln);
    printf("Your name is %s %s %s",fn,mn,ln);

    return 0;
}
