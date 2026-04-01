//find and print hte sum of n natural numbers using for loop

#include<stdio.h>

int main(){

    int numGiven=23,sum;
    for(int i=1;i<=numGiven;i++){
        sum+=i;
    }
    printf("Sum of first %d natural numbers is : %d",numGiven,sum);

return 0;
}
