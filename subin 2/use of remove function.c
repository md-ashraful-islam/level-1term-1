#include<stdio.h>

int main()
{
    char *filename="my text.txt";

    if((remove(filename)))
    {
        perror("file was not removed");
        return 5;
    }

    printf("%s is removed successfully\n",filename);

    if((remove(filename)))
    {
        perror("file was not removed");
        return 10;
    }

    return 0;
}
