// find value of series of cubes of natural numbers 

#include<stdio.h>
#include<math.h>

int main(){

    int terms =5;

    int valueOfSeries=0;

    for(int i=1;i<=terms;i++){
        valueOfSeries+=pow(i,3);
    }

    printf("The valus of this series is %d",valueOfSeries);
    


    return 0;
}