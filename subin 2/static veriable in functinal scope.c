#include<stdio.h>
void func()
{
    int a=10;
    static int s=10;

    a+=2;
    s+=2;

    printf("a=%d ,s=%d\n",a,s);
}

int main()
{
    func();
    func();
    func();

    return 0;
}
