//print all possible pairs for (i,j) where i and  j are both between 1 to n

#include<stdio.h>

int main(){

    int numRange=6;

    int num=numRange; 
    printf("All possible pairs upto n \n",num);
    for(int i=1;i<=num;i++){
        printf("\n");
        for(int j=1;j<=num;j++){
            printf("(%d , %d) ",i,j);
        
    }
    }


    return 0;
}