#include<stdio.h>
int main(void)
{
    char *pChar;
    int * pInt;
    char aChar[8]= {'a','b','a','b','a','b','a','b'};
    printf("%X\n", aChar);/*Output Line #1 */
    pChar = aChar;
    pInt = (int *)aChar;
    printf("%X\n",pChar);/*Output Line #2*/
    printf("%X\n", *pChar);/*Output Line #3 */
    pChar++;
    printf("%X\n",pChar);/*Output Line #4*/
    printf("%X\n",*pChar);/*Output Line #5*/
    printf("%X\n",pInt);/*Output Line #6*/
    printf("%X\n", *pInt);/*Output Line #7*/
    pInt++;
    printf("%X\n",pInt);/*Output Line #8*/
    printf("%X\n", *pInt);/*Output Line #9*/
    return 0;
}
