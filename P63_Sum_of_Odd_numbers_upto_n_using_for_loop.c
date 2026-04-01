// find and print the sum of all odd numbers upto n

#include<stdio.h>

int main(){

    int numGiven=5,oddSum;
    for(int i=1;i<=numGiven;i++){
        if(i%2!=0){
            oddSum+=i;
        }
    }
    printf("Sum of all Even numbers upto n is %d : %d",numGiven,oddSum);

return 0;
}
