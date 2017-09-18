#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    fp1=fopen("New Bitmap Image.BMP","rb");
    fp2=fopen("modify icon.BMP","wb");
    char ch='a';
    if(fp1==NULL)
        return 1;
    if(fp2==NULL)
        return 2;
    while(ch!=EOF)
    {
        ch=fgetc(fp1);
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
