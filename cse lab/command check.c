#include<stdio.h>

int main(int argc, char **argv)
{
    char c;
    while (--argc> 0 && (*++argv)[0] == '-')
        while (c = *++argv[0])
           printf("%c\n" ,c);

    return 0;
}
