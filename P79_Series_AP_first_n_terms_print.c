//print the first n terms of an AP given its first term and common difference

#include<stdio.h>

int main(){
    int firstTerm = 4;
    int commonDifference = 5;

    int terms=7;
    

    for(int i=1;i<=terms;i++){
        printf("[%d] term : %d\n",i,(firstTerm+=commonDifference));
    }




    return 0;
}