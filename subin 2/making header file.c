#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("myheader.h","w");
    if(fp==NULL)
        return 1;
    fprintf(fp,"int add(int n1,int n2)\n{\n\treturn n1+n2;\n}");
    fprintf(fp,"int mul(int n1,int n2)\n{\n\treturn n1*n2;\n}");
    fclose(fp);

    return 0;
}
