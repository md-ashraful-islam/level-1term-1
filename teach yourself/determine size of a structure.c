#include<stdio.h>

int main()
{
    struct s_type{
        double d;
        char ch;
        int i;
        int *p;
    }s;

    printf("%d \n%d",sizeof(s),sizeof(struct s_type));

    return 0;
}
