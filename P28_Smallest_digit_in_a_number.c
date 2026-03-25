//find and print the smallest digit in a number 

#include<stdio.h>

int main(){

    int numGiven = 8345 ;
    int num = numGiven ;

    int digit ; // stores evry digit one by one 
    int smallest = 9 ;

    while(num>0){
        digit = num%10 ;
        num = num/10;
        smallest = (digit<=smallest) ? digit : smallest ;
    }
    printf("The smallest digit in %d is %d",numGiven,smallest);


    return 0;
}