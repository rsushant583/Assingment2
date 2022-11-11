//5. Write a program to input a three digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int x,a,b,c,d;
    printf("Enter a 3 digit number",x);
    scanf("%d",&x);

    a=x%10;
    b=x/10;
    c=b%10;
    d=b/10;


    printf("%d",a+c+d);
    return 0;


}
