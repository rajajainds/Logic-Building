//Calculate and print the product of all digits of a number 

#include<stdio.h>

int main(){

    int numGiven = 1245 ; 
    int num =numGiven ; //given number , product of all digits in it 
    int productOfDigits = 0 ; 
    int digit = 1 ; // this will store each digit one by one 
    if (num != 0 ){
    
    productOfDigits = 1;
 
    while (num){
        digit = num%10 ;
        num = num/10 ;
        productOfDigits *= digit ;

    } 
    }

    printf("Product of all digits of number %d is : %d\n",numGiven,productOfDigits);

    return 0;
}