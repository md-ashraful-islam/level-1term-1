#include<stdio.h>
#include<math.h>

int isprime(long long int n)
{
    int i;
    for(i=3;i*i<=n;i+=2)
        if(n%i==0)
            return 0;

    return 1;
}

int main()
{
    int i,cnt=0;
    long long int n;

    for(i=2;1;i++)
    {
        n=pow(2,i)-1;
        if(isprime(n))
        {
            printf("%d\n",n);
            cnt++;
        }
        if(cnt>100)
            break;
    }

    return 0;
}

