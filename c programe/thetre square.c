#include<stdio.h>
#include<math.h>
int main()
{
int a[3],b=10000000,i,c;
for(i=0;i<3;i++)
{
scanf("%d",&a[i]);
c=(int) sqrt(a[i]);
if((a[i]==2) || (a[i]!=1 && sqrt(a[i])-c<.0000001 && a[i]<b))
b=a[i];
}
if(b==10000000) printf("1");
else
printf("%d",b);
}
