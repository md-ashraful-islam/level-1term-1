#include<stdio.h>

int dectobin(int n)
{
    if(n==0)
        return 0;
    dectobin(n/2);

    if(n%2==0) printf("0");
    else printf("1");
    return 0;
}

int main()
{

    dectobin(115);
}

