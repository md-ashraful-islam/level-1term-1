#include<stdio.h>

int main()
{
    int i,j;
    printf("Enter a decimal number: ");
    scanf("%d.%d",&i,&j);
//this expression work successfully when we input a
//decimal point between two integer or we input a float.

    printf("First part: %d\nlast part: %d",i,j);

    return 0;
}
