//print the matrix and display the sum of each row and column 

#include<stdio.h>

int main(){

    int p[3][3] ={{1,2,3},
                 {4,5,6},
                 {7,8,9}};

    int rowSum[3]={0};
    int columnSum[3]={0};

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                rowSum[i]+=p[i][j];
                columnSum[j]+=p[i][j];

        }
    }

     for(int i=0;i<3;i++){
        printf("Row [%d] :- %d \n",i+1,rowSum[i]);
    }
    for(int i=0;i<3;i++){
        printf("Column [%d] :- %d \n",i+1,columnSum[i]);
    }



    return 0;
}