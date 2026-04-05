// find value of series of factorials of natural numbers 
// 1! +2! +3! ...n! 

#include<stdio.h>
#include<math.h>

int main(){

    int terms = 4;

    int valueOfSeries=1;

    for(int i=2;i<=terms;i++){
        valueOfSeries+= valueOfSeries*i;
        
    }

    printf("The value of this series is %d",valueOfSeries);
    


    return 0;
}