#include<stdio.h>

int main()
{
    unsigned int a=5,b=5,size,sum=0,carry=0,mask;
    size=sizeof(a)*8;
    int i;
    for(i=0;i<size-1;i++)
    {
        if((((((a>>i)&1)&(~((b>>i)&1)^((carry>>i)&1))) || (((b>>i)&1)&(~((a>>i)&1)^((carry>>i)&1))) || (((carry>>i)&1)&(~((b>>i)&1)^((a>>i)&1))))))
            sum|=(1<<(i));
        if((((a>>i)&1)&((b>>i)&1)) || (((a>>i)&1)&((carry>>i)&1)) || (((carry>>i)&1)&((b>>i)&1)))
            carry=1;
        printf("%d %d\n",sum,carry);

    }

    printf("%d %d\n",sum,carry);
    return 0;
}
