//print all the even numbers between 1 and 100 using for loop

#include<stdio.h>

int main (){

    for(int i=2;i<100;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }


    return 0;
}