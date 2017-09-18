#include <stdio.h>

#define abs(x) (x < 0 ? - x:x)

int x;

int doubleGlobalX()
{
    x *=2;
    return x;
}
int main ()
{
    scanf("%d", &x);
    printf("%d\n", abs(doubleGlobalX()));
    return 0;
}
