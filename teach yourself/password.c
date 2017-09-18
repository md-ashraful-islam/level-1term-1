#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="Tristan",s2[100];
    int i=0;
    printf("Please enter your password: ");
    while(1)
    {
        gets(s2);
        if(!strcmp(s,s2))
        {
            printf("Log-on Successful.");
            return 0;
        }

        i++;
        if(i==3)
        {
            printf("Access Denied");
            return 0;
        }
        printf("Please enter your password rightly: ");
    }
}
