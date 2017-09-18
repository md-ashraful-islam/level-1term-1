#include<stdio.h>

int main()
{
    int i;

    union type{
        double d;
        char ch[8];
    }t;
    printf("Enter a double: ");
    scanf("%lf",&t.d);

    FILE *fp;
    fp=fopen("union","wb");
    for(i=0;i<8;i++)
        fwrite(&t.ch[i],1,1,fp);
    fclose(fp);

    t.d=0;

    fp=fopen("union","rb");
    for(i=0;i<8;i++)
        fread(&t.ch[i],1,1,fp);
    fclose(fp);

    printf("You assign %lf",t.d);
    return 0;
}
