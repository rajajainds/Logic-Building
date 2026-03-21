//Calculate the sum of first n natural numbers using While Lopp

#include<stdio.h>

int main (){ 

    int num = 1 ; //any count of the numbers  {from 1 to num sum }
    int start = 0 ; // if num = 0 tha sum = 0 
    int countSum = 0 ;

    while (start<num) { 
        start++;
        countSum +=start ;
    }

    // better approach 
    // printf("The sum of %d natural numbers is : %d\n",num ,countSum);
    // countSum = (num*(num+1))/2;
    printf("The sum of %d natural numbers is : %d\n",num ,countSum);

    return 0;
}