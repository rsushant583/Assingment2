//2. Write a program to print a given number without its last digit.

#include<stdio.h>
int main()
{



    int x;
    printf("Enter a number");
    scanf("%d",&x);

    x=x/10;
    printf("%d",x);
    return 0;


}

