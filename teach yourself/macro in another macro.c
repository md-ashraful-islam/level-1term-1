#include<stdio.h>

#define SMALL 1
#define MEDIUM SMALL+1
#define LARGE MEDIUM+1

int main()
{
    printf("SMALL : %d\nMEDIUM : %d\nLARGE : %d\n",SMALL,MEDIUM,LARGE);
    return 0;
}
//we can use a macro in another macro but sequence is important.
//in quotation macro does not effect.
