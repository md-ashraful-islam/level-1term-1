#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int t,i;
    char str[2][100];
    for(i=0;i<2;i++)
    {
        gets(str[i]);
    }
    printf("%d",strcmp(str[0],str[1]));
    return 0;
}
