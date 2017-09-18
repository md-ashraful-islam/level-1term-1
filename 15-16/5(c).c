#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    int a[argc-1],i;
    for(i=0;i<argc-1;i++)
    {
        a[i]=atoi(argv[i+1]);
    }
    int max,min;
    max=min=a[0];
    printf("bhjggj");
    scanf("%d",&i);
    printf("\n*******%d\n",i);
    for(i=0;i<argc-1;i++)
    {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    printf("MINIMUM: %d\n MAXIMUM: %d",max,min);

    return 0;
}
