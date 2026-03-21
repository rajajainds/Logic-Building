//Calculate and print the factorial of a number using While Loop

#include<stdio.h>

int main (){

    int num = 2 ; // factorial of num to calculate
    int factorial = 1 ; // factorial of 0 is 1
    int iterate = 0 ;

    while (iterate<num){
        iterate++;
        factorial *= iterate ;

    }

    printf("The factorial of nuber %d is : %d\n",num,factorial);
    return 0;
}