//program to perform addition,substraction,division and multiplication
#include<stdio.h>
void main()
{
    float a,b,sum, diff, div,mul;
    printf("enter the value of a:");
    scanf("%f", &a);
    printf("enter the value of b:");
    scanf("%f", &b);
   //addition
    sum=a+b;
   //subtraction
    diff=a-b;
   //division
    div=a/b;  
   //multiplication
    mul=a*b;

    printf("\n The sum is :%.2f" ,sum );
    printf("\nThe Diff is : %.2f",diff);
    printf("\nThe division is: %.2f",div);
    printf("\nThe multiplication is: %.2f",mul);


}