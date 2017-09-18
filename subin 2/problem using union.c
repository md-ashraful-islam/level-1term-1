#include<stdio.h>
union{
    char ch;
    int x;
    int y;
}u;

int main()
{
    u.ch='A';
    printf("u.ch=%c\n\n",u.ch);

    u.x=17;
    printf("u.x=%d\n",u.x);
    printf("u.ch=%c\n\n",u.ch);

    u.y=18;
    printf("u.y=%d\n",u.y);
    printf("u.x=%d\n",u.x);
    printf("u.ch=%c\n",u.ch);
    return 0;

}
