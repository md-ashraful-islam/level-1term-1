#include<stdio.h>
#include<stdlib.h>
int compfunc(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}
int main()
{
    int n,i;
    printf("Please enter your Array size: ");
    scanf("%d",&n);
    int *ara;
    ara=(int *)malloc(sizeof(int)*n);
    printf("Please input Array element: ");
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);
    int key,*p;
    while(1)
    {
        printf("Please enter the value key(0 to exit): ");
        scanf("%d",&key);
        if(key==0)
        {
            free(ara);
            return 0;
        }

        p=(int *)bsearch(&key,ara,n,sizeof(n),compfunc);
        if(p!=NULL)
            printf("Item found %d\n",*p);
        else
            printf("Item NOT found.\n");
    }
}
