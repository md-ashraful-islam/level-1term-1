#include<stdio.h>

int main()
{
    int n;

    printf("Please enter a positive integer(>0): ");
    scanf("%d",&n);

    switch(n)
    {
        case 1:printf("\nOne item.\n");
            break;
        case 2:printf("\nTwo items.\n");
            break;
        default:
            printf("\nMany items.\n");
    }

    return 0;
}
