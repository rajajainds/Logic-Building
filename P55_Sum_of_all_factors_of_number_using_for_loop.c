//calculate and print the sum of all factors of a given number 

#include<stdio.h>

int main(){
    
    int numGiven=6;
    int num= numGiven;
    int sumOfFators=0;

    for(int i=1;i<=num;i++)
    {
        if(num%i==0){
            sumOfFators+=i;

        }

    }
    printf("The sum fo all factors of %d is %d",numGiven,sumOfFators);



    return 0;
}