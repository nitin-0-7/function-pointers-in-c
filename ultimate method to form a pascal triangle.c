/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int factorial(int a){
    int fact=1;
    for(int i=1;i<=2;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int a,int b){
   int ncr=factorial(a)/(factorial(b)*factorial(a-b));
    return ncr;
}

int main()
{
    int n;                                                              //icj+1=iCj*(i-j)/(j+1)
    printf("Enter n ");
    scanf("%d",&n);                                                     //icj ka first value 1 hota  hai to icj ke jagah 1 likh sakte hai
    for(int i=0;i<=n;i++){
        for(int k=1;k<=n-i;k++){                                        // iske tarah icj=1 
            printf(" ");                                                //icj+1=1*(i-j)/(j+1)
        }
        int first=1;                                                    // to first=1;
        for(int j=0;j<=i;j++){                                         // first=first*(i-j)/(j+1)
            printf(" %d",first);
            first=first*(i-j)/(j+1);  
            
        }
        printf("\n");
        
    }
    

    return 0;
}