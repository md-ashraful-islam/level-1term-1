#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    printf("PLease enter number of contact you want to add: ");
    scanf("%d",&n);
    char phone[n][15],name[n][20],a[20];
    printf("Please enter the name & corresponding phone number: \n");
    for(i=0;i<n;i++)
    {
        printf("Enter name: ");
        gets(name[i]);
        printf("Enter number: ");
        gets(phone[i]);
    }
    printf("Enter the name you want to know number: ");
    gets(a);
    for(i=0;i<n;i++)
        if(!strcmp(name[i],a))
            break;
    if(i==n-)
        printf("!!!Your name is not correct.");
    printf("The number of this corresponding name is %s",phone[i]);
    return 0;
}
