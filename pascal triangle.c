/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
   for(int i=0;i<=n;i++){
       for(int j=0;j<=i;j++){
           int icj=combination(i,j);
       printf("%d",icj);
       }
       printf("\n");
       
   }
    return 0;
}