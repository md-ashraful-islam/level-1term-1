#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    int *marks;
    printf("Please enter the number of student: ");
    scanf("%d",&n);
    marks=(int *)calloc(n,sizeof(n));
    // the all location is filled by zero because of using calloc.
    if(marks==NULL)
    {
        printf("The allocation of memory is failed.");
        return 1;
    }
// the all location is filled by zero.
//    printf("The marks of the student is after inputting: ");
//    for(i=0;i<n;i++)
//        printf("%d\n",marks[i]);
    printf("Enter the marks of the students: ");
    for(i=0;i<n;i++)
        scanf("%d",&marks[i]);
    printf("The marks of the student is: ");
    for(i=0;i<n;i++)
        printf("%d\n",marks[i]);
    free(marks);
    return 0;
}
