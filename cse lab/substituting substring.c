#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,a[10]={0},k=0,l1,l2,j,m;
    char str1[200],str2[50],str3[50],str4[300];

    printf("Enter a string: ");
    scanf(" %[^\n]",str1);
    printf("Enter a substring: ");
    scanf(" %[^\n]",str2);
    printf("Enter a new substring: ");
    scanf(" %[^\n]",str3);
    l1=strlen(str2);
    l2=strlen(str3);


    for(i=0;*(str1+i);i++)
    {
        if(*(str1+i)==*(str2))
        {
            for(j=0;*(str1+i+j) && *(str2+j);j++)
            {
                if(*(str1+i+j)!=*(str2+j))
                    break;
            }
            if(!(*(str1+i+j) && *(str2+j)))
            {
                a[k]=i;
                k++;
            }
        }
    }


    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    k=0;
    for(i=0,j=0;*(str1+i);i++)
    {
        if(i==a[k])
        {
            for(m=0;*(str3+m);m++,j++)
                *(str4+j)=*(str3+m);
            i+=(l1-1);
            k++;
        }
        else
        {
            *(str4+j)=*(str1+i);
            j++;
        }

    }
    *(str4+j)='\0';

    printf("%s",str4);


    return 0;
}
