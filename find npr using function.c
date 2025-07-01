/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){     //npr=n!/(n-r)!
        fact=fact*i;
    }
    return fact;
}
int permutation(int n,int r){
    int npr=factorial(n)/(factorial(n-r));
    return npr;
}

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int r;
    printf("Enter r:");
    scanf("%d",&r);
   int npr= permutation(n,r);
    printf("%d",npr);
   
       
   
    return 0;
}