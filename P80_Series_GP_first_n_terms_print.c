//print the first n terms of an GP given its first term and common ratio

#include<stdio.h>
#include<math.h>

int main(){
    int firstTerm = 2;
    int commonRatio = 2;

    int terms=7;
    

    for(int i=0;i<terms;i++){
        printf("[%d] term : %d \n",i+1,(int)(firstTerm*(pow(commonRatio,i))));
    }




    return 0;
}