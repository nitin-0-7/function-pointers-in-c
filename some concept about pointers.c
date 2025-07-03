/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a=45;
   int* x=&a;  //int* -> int ka adress store krta hai
   //VVIP-> *x=7; // a is changed.
   int** y=&x; //int** ->int* ka address store karta hai
   printf("%d\n",a);
   printf("%d\n"*x);  //%p se address print hota hai
   printf("%d\n",**y);
   
   return 0;
}