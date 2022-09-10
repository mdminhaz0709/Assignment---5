// 2. Write a program to print the first N natural numbers.

#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(i=1 ; i<=num ; i++)
    {
        printf("\n%d",i);
    }

    return 0;
}

