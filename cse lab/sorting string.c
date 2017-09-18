#include<stdio.h>
#include<string.h>

//int comparestr(char *str1,char *str2)
//{
//    int l1=strlen(str1);
//    int l2=strlen(str2),i;
//    for(i=0;(i<l1) && (i<l2);i++)
//    {
//        if(*(str1+i)>*(str2+i))
//            return -1;
//        else if(*(str1+i)<*(str2+i))
//            return 1;
//    }
//    if(i<l1)
//        return -1;
//    else if(i<l2)
//        return 1;
//    return 0;
//
//}

int main()
{
    int i,j;
    char str[10][100],temp[100];

//    char ara[2][10];
//    for(i=0;i<2;i++)
//        scanf(" %[^\n]",&ara[i]);

//    printf("%d",strcmp(ara[1],ara[2]));
    printf("Enter 10 string: ");
    for(i=0;i<10;i++)
    {
        scanf(" %[^\n]",&str[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if((strcmp(&str[i],&str[j]))==-1)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    printf("\n\n\n");

    for(i=0;i<10;i++)
    {
        printf("%s\n",str[i]);
    }
}
