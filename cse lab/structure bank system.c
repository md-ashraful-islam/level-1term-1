#include<stdio.h>

typedef struct {
    int account_id;
    double balance;
}AccountBalance;

int main()
{
    printf("%d",sizeof(AccountBalance));
}
