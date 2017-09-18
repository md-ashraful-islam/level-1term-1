#include<stdio.h>

char *strncat(char *dest,char *src,size_t n)
{
    int i=0,j=0;
    while(*dest)
    {
        dest++;
        j++;
    }

    for(i=0;*(src+i) && i<n;i++)
        *(dest+i)=*(src+i);

    *(dest+i)='\0';
    return dest-j;
}

char *strchr(char *str,int c)
{
    int i;
    for(i=0;*(str+i);i++)
    {
        if(*(str+i)==c)
            break;
    }
    return &i;
}

int strcmp(char *str1,char *str2)
{
    int i=0;
    for(i=0;*(str1+i) && *(str2+i);i++)
    {
        if(*(str1+i)>*(str2+i))
            return -1;
        if(*(str1+i)<*(str2+i))
            return 1;
    }
    if(!(*(str1+i)))
        return 1;
    else if(!(*(str2+i)))
        return -1;
    return 0;
}
//for you i do it as constant char string
int strleng(const char *str)
{
    int i;
    for(i=0;*(str+i);i++);

    return i;
}

char *str(char *haystack,char *needle)
{
    int i=0,j=0;
    for(i=0;*(haystack+i);i++)
    {
        if(*(haystack+i)==*(needle))
        {
            for(j=0;*(haystack+i+j) && *(needle+j);j++)
                if((*(haystack+i+j)!=*(needle+j)))
                    break;
        }
        if(!(*(needle+j)))
            return &i;
    }
    return NULL;
}

//testing.
int main()
{
    char str1[1000],str2[1000];
    printf("Enter 1st string: ");
    scanf(" %[^\n]",&str1);
    printf("Enter 2nd string: ");
    scanf(" %[^\n]",&str2);

    printf("Result of using 1st function: %s\n",strncat(str1,str2,2));
//    printf("Result of using 2nd function: %s",strchr(str1,'a'));//checking immpossible
    printf("Result of using 3rd function: %d\n",strcmp(str1,str2));
//    printf("Result of using 4th function: %d",strleng(str1));
    printf("Result of using 5th function: %s\n",str(str1,str2));//checking immpossible


}
