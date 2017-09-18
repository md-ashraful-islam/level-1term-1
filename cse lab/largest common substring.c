#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i,j,a[40]={0},k=0,p;
    int max;
    printf("Enter your 1st string: ");
    gets(str1);
    printf("Enter your 2nd string: ");
    gets(str2);
    int l1=strlen(str1),l2=strlen(str2);
    for(i=0;i<l1;i++)
    {
        for(j=0;j<l2;j++)
        {
            if(str1[i]==str2[j])
            {
                for(p=0;;p++)
                {
                    if(str1[i+p]!=str2[j+p])
                        break;
                }
//                printf("%d\n",p);
                a[k]=p;
                k++;
            }
        }
    }
    for(i=0;i<l2;i++)
    {
        for(j=0;j<l1;j++)
        {
            if(str2[i]==str1[j])
            {
                for(p=0;;p++)
                {
                    if(str2[i+p]!=str1[j+p])
                        break;
                }
                a[k]=p;
                k++;
            }
        }
    }
//    printf("\n\n");
//    for(i=0;i<40;i++)
//        printf("%d\n",a[i]);

    max=a[0];
    for(i=0;i<40;i++)
        if(max<a[i])
            max=a[i];
     printf("\n\n%d\n\n",max);
}
