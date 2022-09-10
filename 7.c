// 7. Write a program to print the first N even natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=num*2 ; i>=2 ; i-=2)
    {
        printf("\n%d",i);
    }

    return 0;
}