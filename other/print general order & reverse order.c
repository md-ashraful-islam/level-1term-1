#include<stdio.h>
#include<conio.h>

void func()
{
    char ch='5';
    if((ch=getchar())!='\n')
        func();
    putchar(ch);
}

int main()
{
    printf("Enter your line: ");
    func();
    return 0;
}
