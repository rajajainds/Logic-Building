//break out of the loop when the sum of numbers in a loop from 1 to 00 becomes greater than 100

#include<stdio.h>

int main(){
    int sum = 0;

    for(int i=1;i<=100;i++){
        sum+=i;
        printf("%d\n",sum);
        if(sum>=100){
            break;
        }
    }

    printf("The sum is : %d",sum);
    

    return 0;
}
