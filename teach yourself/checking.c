#include<stdio.h>
int main()
{
    int ara[2][3][2]={
        {
            2,3,
            5,7,
            9,8
        },
        {
            2,7,
            4,5,
            3,1
        }
    };
    /*   *(*(p+1)+2)  */
    int *p;
    p=ara;
    printf("%d",*(*(*(ara+1)+1)+1));
    return 0;
}
