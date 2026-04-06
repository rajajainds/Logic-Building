//calculate and print the value of series of powers of x upto x^n

#include<stdio.h>
#include<math.h>

int main(){

    int x=3;

    int num=5;
    int sum=0;

    for(int i=0;i<=num;i++){
        sum+=pow(x,i);
    }
    printf("The value of this series is %d",sum);



    return 0;
}
