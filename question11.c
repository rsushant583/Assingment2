/*Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
and convert it into USD.*/
#include<stdio.h>
int main()
{
    float x,y=76.23;

    printf("Enter amount in INR \n");
    scanf("%f",&x);

    printf("%f INR is equal to %f USD",x,x/y);
    return 0;

}
