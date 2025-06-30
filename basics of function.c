/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void govindpur(){
    printf("You are in govindpur\n");
    return; //program end
}
void bistupur(){
    printf("You are in bistupur\n");
    govindpur(); //calling govindpur
    return;
}
void telco(){
    printf("you are in telco\n");
    bistupur(); //calling bistupur
    return;
}
void sakchi(){
    printf("you are in sakchi\n");
    telco(); //calling telco
    return;
    
    
}

int main()
{
    sakchi(); //calling sakchi

    return 0;
}