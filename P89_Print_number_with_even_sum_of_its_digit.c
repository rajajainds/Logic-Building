//print the numbers between 1 and 100 which has even sum of the digits 

#include<stdio.h>

int main(){

    int start=1;
    int end=100;

   

    for(int i=start;i<=end;i++){
        int digit=0;
        int num=i;
        int sumOfDigits=0;

        while(num){
            digit=num%10;
            num=num/10;

            sumOfDigits+=digit;
        }

        if(sumOfDigits%2==0){
            printf("%d->",i);
        }
    }

    return 0;
}