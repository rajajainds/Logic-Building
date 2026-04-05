// find value of series of subes of natural numbers 

#include<stdio.h>
#include<math.h>

int main(){

    int terms =5;

    int valusOfSeries=0;

    for(int i=1;i<=terms;i++){
        valusOfSeries+=pow(i,3);
    }

    printf("The valus of this series is %d",valusOfSeries);
    


    return 0;
}