// count the number of digits in the given number using do-while loop

#include<stdio.h>

int main(){

    int numGiven = 10;
    int num =numGiven;
    int count = 0 ;

    do {
        num=num/10;
        count++;


    }while(num!=0);


   printf("The number of digits in given number is %d ",count);


    return 0;
}
