#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n[5],i,j;
    int *marks[5];
    for(i=0;i<5;i++)
    {
        printf("Enter the number of student of class %d: ",i+1);
        scanf("%d",&n[i]);
        marks[i]=(int *)calloc(n[i],sizeof(i));
        if(marks[i]==NULL)
        {
            printf("!!The memory location is failed.");
            return 1;
        }
    }
    printf("\n\n\n");
    for(i=0;i<5;i++)
    {
        printf("Enter the marks of the student of %d: \n",i+1);
        for(j=0;j<n[i];j++)
            scanf("%d",&marks[i][j]);
        printf("\n");
    }

    printf("\n\nOUTPUT\n\n");

    for(i=0;i<5;i++)
    {
        printf("The marks of the student of %d: \n",i+1);
        for(j=0;j<n[i];j++)
            printf("%4d",marks[i][j]);
        printf("\n");
    }

    for(i=0;i<5;i++)
        free(marks[i]);

    return 0;
}
