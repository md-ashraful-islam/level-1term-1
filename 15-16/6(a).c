#include<stdio.h>

#define min3(a,b,c) (((a)<(c))?(((a)<(b))?(a):(b)) : (((c)<(b))?(c):(b)))
#define min4(a,b,c,d) ((min3(a,b,c)<min3(d,c,b))?min3(a,b,c):min3(d,c,b))

int main()
{
    printf("%d\n",min3(-2,1,-4));
    printf("%d\n",min3(5,-4,-5));
    printf("%d\n",min3(4,-5,-9));
    printf("%d\n",min4(5,-4,-5,-554));
}

