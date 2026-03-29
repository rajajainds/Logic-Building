//calculate and print the factorial of a given number 

#include<stdio.h>

int main(){

    int numGiven = 5;


    if (numGiven<0){
        printf("invalid number to find factorial\n");
    }else if (numGiven<2){
        printf("factorial of %d is 1 \n",numGiven);
    }else{

        int factorial=1;

    for(int i=1;i<=numGiven;i++){
        factorial*=i;
    }

   printf("factorial of %d is %d \n",numGiven,factorial);
    }

    return 0;
}