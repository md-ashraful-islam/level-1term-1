#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *marks;
    int n,i;
    printf("Please enter the students number: ");
    scanf("%d",&n);
    //here allocate memory
    marks=(int *)malloc(sizeof(n)*n);
    if(marks==NULL)
    {
        printf("The dynamic memory allocation is failed.");
        return 1;
    }

    printf("Enter marks of students: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }

    printf("The number of the students are : ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",marks[i]);
    }

    //here free memory
    free(marks);
    return 0;
}
