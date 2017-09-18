#include<stdio.h>
int l=0;
int findmode(int a[]);
int main()
{
    printf("Please enter Array size: ");
    scanf("%d",&l);
    int a[l],i;
    printf("Please enter your Array: ");

    for(i=0;i<l;i++)
        scanf("%d",&a[i]);


    if(findmode(a)!=-100)
        printf("Mode of the array is %d",findmode(a));

    return 0;
}
int findmode(int a[])
{
    int i,j,max;
    int s[l];

    for(i=0;i<l;i++)
        s[i]=0;

    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            if(a[i]==a[j])
                s[i]++;
        }
    }


    max=s[0];
    for(i=0;i<l;i++)
    {
        if(max<s[i])
        {
            max=s[i];
            j=i;
        }
    }
    a[5]=500;
    if(j==l)
    {
        printf("All the elements are mode. ");
        return -100;
    }
    return a[j];
}
