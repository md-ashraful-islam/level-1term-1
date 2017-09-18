#include<stdio.h>
int main()
{
//    int a[4][3]={2,3,5,0,1,2,4,1,5,2,3,7},i;
    int a[5]={5,3,2},i;
    int *p,*q;

    p=a;
    printf("Address of a  %d\n",p);
    q=++p;
    printf("Address of a  %d\n",--p);
    printf("Address of a  %d\n",p++);
    printf("Address of a  %d\n",p);
    printf("Address of a  %d\n",q+p);

//    printf("Address of a  %p\n",&a[0]);
//    printf("value of a  %d\n",*p);
//    printf("Address of a  %p\n\n\n",&a[1]);
//    for(i=0;i<5;i++)
//        printf("%d\n",*(a+1));
//
////    }
//    printf("%d",*(-1+(*a+1+1))-1);

}
