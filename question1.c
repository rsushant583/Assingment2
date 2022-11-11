//1. Write a program to print unit digit of a given number

#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number",x);
    scanf("%d",&x);

    x=x%10;

    printf("%d",x);
    return 0;

}
