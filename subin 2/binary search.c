#include<stdio.h>
#include<stdlib.h>

int comp(const void *a,const void *b)
{
    return (*(int *)a-*(int *)b);
}

int main()
{
    int num,*p;
    int ara[10]={-55,484,78,788,4,88,77,7,4584,5874};

    qsort(ara,10,sizeof(int),comp);

    while(1)
    {
        printf("Please enter a number that you want to search.(0 to exit): ");
        scanf("%d",&num);
        if(num==0)
            return 0;

        p=bsearch(&num,ara,10,sizeof(int),comp);

        if(p==NULL)
            printf("\nNot found\n");

        else
            printf("\nFound : %d\n",*p);
    }
}
