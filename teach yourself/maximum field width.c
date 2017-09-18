#include<stdio.h>

int main()
{
    int i,j;
    printf("Enter two number: ");
    scanf("%3d%d",&i,&j);
//    this expression tells scanf fun ction to input only 3 digit for i
//    that means we cannot assign greater than three digit integer in i
//    if we try to assign 1234567 in i scanf function assign i by 123
//    and j by 4567 in this case if we input other integer it does not
//    operated by scanf function.


    printf("Two number is %d\t %d.",i,j);
    return 0;
}
