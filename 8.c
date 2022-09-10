// 8. Write a program to print squares of the first N natural numbers.

#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter a number :");
    scanf("%d",&num);
    printf("squares of the first %d natural numbers are\n",num);
    for(i=1 ; i<=num ; i++)
    {
        printf("\n%d = %d",i,i*i);
    }

    return 0;
}
