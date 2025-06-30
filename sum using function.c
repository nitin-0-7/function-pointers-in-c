/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int add(int a, int b){
    return a+b;
}


int main()
{
   int a,b;
   printf("Enter 1st no ");
   scanf("%d",&a);
   printf("Enter 2nd no ");
   scanf("%d",&b);
   int sum=add(a,b);
   printf("The sum of 1st and 2nd number is %d",sum);
   
    return 0;
}