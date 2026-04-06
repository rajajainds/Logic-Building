//calculate and print the value of this series 
// x -x^2/2! + x^3/3! ..  

#include<stdio.h>
#include<math.h>

int main(){
    int num=3;
    int x=2;

    float sumVal=x;
    int currentFact = 1;

    for(int i=2;i<=num;i++){
        currentFact*=i;

        sumVal -= pow((-x),i)/(currentFact);

    }

    printf("The sum of the series is %.2f ",sumVal);


    return 0;
}