/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int min(int a,int b){
    if(a<b) return a;
    else return b;
    
}
int gcd(int a,int b){
    int hcf;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    return hcf;
}

int main()
{
    int k;
    printf("Enter k: ");
    scanf("%d",&k);
     int d;
    printf("Enter d: ");
    scanf("%d",&d);
    int hcf=gcd(k,d);
    printf("The HCF/GCD of %d and %d is : %d",k,d,hcf);


    return 0;
}