#include<stdio.h>
int  recurse(int count)
{
    if(count>5)
        return 0;
    printf("count :%d\n",count);
    recurse(count+1);
    printf("count :%d\n",count);
    return 0;
}
int main()
{
    recurse(1);
    return 0;
}
