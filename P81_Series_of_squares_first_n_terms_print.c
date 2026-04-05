// find value of series of squares of natural numbers 

#include<stdio.h>
#include<math.h>

int main(){

    int terms =7;

    int valusOfSeries=0;

    for(int i=1;i<=terms;i++){
        valusOfSeries+=pow(i,2);
    }

    printf("The valus of thsi series is %d",valusOfSeries);
    


    return 0;
}