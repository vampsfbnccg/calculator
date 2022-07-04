/* Project: A simple calculator that inputs two numbers and output sum, difference, product and quotient.
   Author: Levis Bangua Chomba
   Compiler: GNU GCC   C89
   License: MIT
   Date: July 2022

*/
#include <stdio.h>     //(stdio stands for standard input output functions)
#include <stdlib.h>     //(stdlib stand for standard library functions)

int main()
{
    float num1,num2,sum,difference,product,quotient;
    printf("Calculator\n");
    //input
    printf("Enter two numbers:\n");
    scanf("%f%f",&num1,&num2);
    //computation
    //arithmetic operators: + - * / ++ -- %
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    //output
    //20 + 30 = 50
    printf("%8.2f + %8.2f = %-8.2f\n",num1, num2, sum);
    printf("%8.2f - %8.2f = %-8.2f\n",num1, num2, difference);
    printf("%8.2f * %8.2f = %-8.2f\n",num1, num2, product);
    printf("%8.2f / %8.2f = %-8.2f\n",num1, num2, quotient);
    return 0;
}
