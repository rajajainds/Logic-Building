// find and print the sum of all even numbers upto n

#include<stdio.h>

int main(){

    int numGiven=5,evenSum;
    for(int i=1;i<=numGiven;i++){
        if(i%2==0){
            evenSum+=i;
        }
    }
    printf("Sum of all Even numbers upto n is %d : %d",numGiven,evenSum);

return 0;
}
