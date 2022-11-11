//3. Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers:\n",a,b);
    scanf("%d %d",&a,&b);

    c=a+b;
    a=c-a;
    b=c-b;
    printf("%d %d \n",a,b);







}
