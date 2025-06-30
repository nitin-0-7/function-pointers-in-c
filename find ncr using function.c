/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
 int factorial(int x){
        int fact=1;
        for(int i=2;i<=x;i++){
            fact=fact*i;
        }
        return fact;
    }

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int r;
    printf("Enter r:");
    scanf("%d",&r);
    int nfact=factorial(n); //n!
    int rfact=factorial(r); //r!
    int nrfact=factorial(n-r); //(n-r)!
    
    int ncr=nfact/(rfact*nrfact);
    printf("%d",ncr);
    return 0;
}