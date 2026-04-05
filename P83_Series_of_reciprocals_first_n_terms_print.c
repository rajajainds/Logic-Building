// find value of series of reciprocals of natural numbers 

#include<stdio.h>
#include<math.h>

int main(){

    int terms =6;

    float valueOfSeries=0;

    for(int i=1;i<=terms;i++){
        valueOfSeries+=pow(i,-1);
    }

    printf("The value of this series is %.2f",valueOfSeries);
    


    return 0;
}