// find value of series of squares of natural numbers 

#include<stdio.h>
#include<math.h>

int main(){

    int terms =7;

    int valueOfSeries=0;

    for(int i=1;i<=terms;i++){
        valueOfSeries+=pow(i,2);
    }

    printf("The value of this series is %d",valueOfSeries);
    


    return 0;
}