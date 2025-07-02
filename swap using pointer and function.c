/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void swap(int *a,int *b){
    int temp=*a;                                                        // *=pointer variable ka address store krta hai
    *a=*b;
    *b=temp;
    return;
}



int main()
{
    int n;                                                     
    printf("Enter n:");                                        
    scanf("%d",&n);     //pehle 2 integer input value liye user se                                         
    int m;               // feer ye 2 integer value ke dabbe bane 
    printf("Enter m:");   // feer hum gye swap function me or yha se humne address of n and adress of m ko int *a,int *b ka dabba (jo ki ponter ka dabba hai)me dal diye jo ki address store krta hai 
    scanf("%d",&m);      // int *a ,int *b me n,m ka address store hogaya
    
    swap(&n,&m);                                                //or int *a,int *b  pointer ka bhi address hoga
    printf("The value of n is %d\n",n);                       // feer hum gye int temp ka dabba me
    printf("The value of m is %d",m);                        // uske baad *a hai jiska matlb *a me jo address hai uss address me jo value hai wo value ko temp ka dabba me dal do
    return 0;
}
                                                                                    //temp ka bhi koi address hoga
                                                                                    
                                                                                    
                                                              //*a=*b                      
                                                                                    
                                                               //*b me jo address hai uss address me jao aur uss address me jakr uss value ko lekr aao jo ki *a ke barabr hojayega                      
                                                                                    
                                                                                    
                                                                      //feer *b ka jo address hai usko temp ka address ka barabr hojayega              
                                                                                    
                                                                                    
                                                                                    
                                                                                    
                                                                                    