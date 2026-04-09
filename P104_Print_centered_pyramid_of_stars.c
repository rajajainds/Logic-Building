//print the stars in centered pyramid form 

#include<stdio.h>

int main(){

    
   int n=8;

for(int i=1;i<=n;i++){
    printf("\n");
    for(int k=1;k<=(n-i);k++){
        printf(" ");
    }
    for(int j=1;j<=(2*i-1);j++){

        printf("*");

    }
}



    return 0;
}