//Calculate the sum of all Even numbers from 1 up to n using While Lopp

#include<stdio.h>

int main (){ 

    int tillNum = 15 ; // {from 1 to num , all even sum }
    int start = 0 ; // if num = 0 tha sum = 0 
    int evenSum = 0 ;

    while (start<tillNum) { 
        start++;
        if (start%2 == 0){
        evenSum +=start ;
        }
    }

    printf("The sum of all Even numbers up to %d is  : %d\n",tillNum ,evenSum);

    return 0;
}