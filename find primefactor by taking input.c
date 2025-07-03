/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void primefactor(int x){
    printf("Prime factor of entered no is %d :",x);
    while(x%2==0){    //for 2s 
        printf(" 2 ");
        x=x/2;
    }
    for(int i=3;i*i<=x;i+=2){  //for odd entered number
        printf("%d ",i);
        x=x/i;
    }
    if(x>2){               //Entered no is prime which is greate than 2
        printf(" %d",x);
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    if(n<=0){
        printf("Entered no is invalid or less than zero ");
    }
    else{
        primefactor(n);
    }

    return 0;
}