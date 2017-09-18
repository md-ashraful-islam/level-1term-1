#include<stdio.h>
#include<string.h>
int findmode(int a2[],int l)
{
    int a[l];
    int a1[50]={0},i,j,max;
    for(i=0;i<l;i++)
        a[i]=a2[i];
    for(i=0;i<l-1;i++)
    {
        if(a[i])
        {
            for(j=i+1;j<l;j++)
            {
                if(a[j]==a[i])
                {
                   a1[i]++;
                   a[j]=0;
                }
            }
        }

    }
    max=a1[0];
    j=0;
    for(i=1;i<l;i++)
    {
        if(max<a1[i])
        {
            max=a1[i];
            j=i;
        }

    }
    return a[j];
}
int main()
{
    char str[100];
    printf("Enter your string: ");
    gets(str);
    int l=strlen(str);
    int a[l],i,k=0,j,t=0,m;
    for(i=0;i<l;i++)
        a[i]=0;
    for(i=0;i<l-1;i++)
    {
        if(str[i]!='0')
        {
            for(j=i+1,a[k]++;j<l;j++)
            {

                if(str[i]==str[j])
                {
                    str[j]='0';
                    a[k]++;
                }
            }
            k++;
        }
    }

    m=findmode(a,k);


    for(i=0;i<k;i++)
    {
        if(a[i])
        {
            if(m>a[i])
                t=t+m-a[i];
            else
                t=t-m+a[i];
        }

    }


    if(t>=2 && a[k-1]>1)
        printf("\nNO");
    else
        printf("\nYES");
    return 0;

}
