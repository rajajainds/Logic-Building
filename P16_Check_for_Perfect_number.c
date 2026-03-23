// Check whether the given number is Perfect number 

#include<stdio.h>
#include<stdlib.h>

int main (){

    int numGiven = 7 ;
    int num = numGiven ;

    int iterate = 1;

    int perfectSum = 0; //stores the sum of all its divisors 
   if (numGiven < 2){
        printf("No, %d is not a Perfect Number",numGiven);
    }else{
    while (iterate<=num/2){
        if (num%iterate==0){
            perfectSum+=iterate;
        }
        iterate++;
    }
    

    if (numGiven == perfectSum){
        printf("Yes, %d is a Perfect Number",numGiven);
    }else {
        printf("No, %d is not a Perfect Number",numGiven);
    }
}

   
    return 0;
}
