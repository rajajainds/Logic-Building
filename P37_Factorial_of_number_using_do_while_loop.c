//find and print the factorial of a given number using do-while loop

#include<stdio.h>

int main(){

    int numGiven=5;
    int iterate=1;
    int num=numGiven;
    int factorial=1;

    if(numGiven<0){
        printf("Invalid number for fatocial");
    }else if (numGiven==0 || numGiven==1){
        printf("factorial of %d is %d",numGiven,factorial);
    }else{

    do{
       
        factorial*=iterate;
        iterate++;

    }while(iterate<=num);

    printf("factorial of %d is %d",numGiven,factorial);

     }


return 0;
}