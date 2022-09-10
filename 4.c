// 4. Write a program to print the first N odd natural numbers

#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter a number - ");
    scanf("%d",&num);
    for(i=1 ; i<=num*2 ; i+=2)
    {
        printf("\n%d",i);
    }
    /* 2nd method
    int i,num,j=1;
    printf("Enter a number ");
    scanf("%d",&num);
    for(i=1 ; i<=num ; i++)
    {
        printf("\n%d",j);
        j=j+2;
    } */

    return 0;
}
