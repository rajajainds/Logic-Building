//print from 1 to 100 and stop if number is divisible by 17

#include<stdio.h>

int main(){

    int numStop =17; // number at which we have to break the loop

    for(int i=1;i<=100;i++){
        printf("%d\n",i);

        if(i%numStop==0){
            break;
        }
        }




    return  0;
}