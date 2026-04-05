// find value of series of powers of two(2) of natural numbers 

#include<stdio.h>
#include<math.h>

int main(){

    int terms =6;

    for(int i=0;i<=terms;i++){
        printf("[%d] term : %d\n",i+1,(int)pow(2,i));
    }

    
    


    return 0;
}