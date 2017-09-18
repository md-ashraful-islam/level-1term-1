#include<stdio.h>

int encode(int n)
{
    union type{
        int i;
        char ch[4];
    }t;

    t.i=n;
    //swp bytes
    t.ch[1]^=t.ch[2];
    t.ch[2]^=t.ch[1];
    t.ch[1]^=t.ch[2];
    t.ch[3]^=t.ch[4];
    t.ch[4]^=t.ch[3];
    t.ch[3]^=t.ch[4];

    return t.i;
}


int main()
{
    int n;
    printf("Please enter a number: ");
    scanf("%d",&n);
    //encoded data
    n=encode(n);
    printf("Encoded number is %d\n",n);
    //decoded data
    n=encode(n);
    printf("Your number is %d\n",n);

    return 0;
}
