#include<stdio.h>
int main()
{
    char ch1='A',ch2='B';
    int n1=100,n2=100000;
    printf("value of ch1=%c,\t",ch1);
    printf("Address of ch1=%p.\n",&ch1);

    printf("value of ch2=%c,\t",ch2);
    printf("Address of ch2=%p.\n",&ch2);

    printf("value of n1=%d,\t",n1);
    printf("Address of n1=%p.\n",&n1);

    printf("value of n2=%d,\t",n2);
    printf("Address of n2=%p.\n",&n2);

    printf("\n\n\n\a");

    int ara[5]={10,52,78,5456,454};
    printf("Value of Array is %i\t%i\t%i\t%i\t%i.\n",ara[0],ara[1],ara[2],ara[3],ara[4]);

    printf("Address of ara[0] is %p\n",&ara[0]);
    printf("Address of ara[1] is %p\n",&ara[1]);
    printf("Address of ara[2] is %p\n",&ara[2]);
    printf("Address of ara[3] is %p\n",&ara[3]);
    printf("Address of ara[4] is %p\n",&ara[4]);

    return 0;
}
