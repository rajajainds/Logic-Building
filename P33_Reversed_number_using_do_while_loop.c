// print the reversed of teh given number using do-while loop

#include<stdio.h>

int main(){

    int numGiven = -890;
    int num =numGiven;
    int reverse =0 ;

    do {
        reverse=reverse*10+(num%10); 
        num=num/10;


    }while(num!=0);


   printf("The reverse of number is %d ",reverse);



    return 0;
}