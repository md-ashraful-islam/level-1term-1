#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *marks;
    int i,n;
    printf("Please enter the number of student: ");
    scanf("%d",&n);
    //now allocate memory
    marks=(int *)malloc(sizeof(int)*n);
    if(marks==NULL)
    {
        printf("Memory allocation  is failed for marks");
        return 1;
    }

    printf("Enter the marks for each student: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }

    printf("the values of the Array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",marks[i]);
    }

    //now free the memory.
    free(marks);
    return 0;
}
