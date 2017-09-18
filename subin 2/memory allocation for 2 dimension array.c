#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **marks,*num;
    int c1,c2,i,j;
    printf("Enter the starting class: ");
    scanf("%d",&c2);
    printf("Enter the ending class: ");
    scanf("%d",&c1);
    marks=(int **)malloc(sizeof(int *)*(c1-c2+1));

    num=(int *)malloc(sizeof(i)*(c1-c2+1));
    if(num==NULL || marks==NULL)
    {
        printf("Memory allocation is failed.");
        return 1;
    }
    for(i=0;i<=(c1-c2);i++)
    {
        printf("Enter the number of student of class %d: ",(i+c2));
        scanf("%d",&num[i]);
        marks[i]=(int *)malloc(sizeof(i)*num[i]);
        if(marks[i]==NULL)
        {
            printf("Memory allocation is failed.");
            return 2;
        }
        printf("Enter the marks of student of %d: ",(i+c2));
        for(j=0;j<num[i];j++)
            scanf("%d",&marks[i][j]);
    }
    //now print result.
    for(i=0;i<=(c1-c2);i++)
    {
        printf("\n");
        printf("The number of the student of class %d: ",(i+c2));
        for(j=0;j<num[i];j++)
        {
            printf("%d\t",marks[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<=(c1-c2);i++)
        free(marks[i]);

    return 0;
}
