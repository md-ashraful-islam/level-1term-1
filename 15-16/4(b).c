#include<stdio.h>

int enigma(int n)
{
    if(n==1)
        return 0;
    else
    return 1+enigma(n/2);
}

int main()
{
    printf("%d",enigma(4096));
    return 0;
}
