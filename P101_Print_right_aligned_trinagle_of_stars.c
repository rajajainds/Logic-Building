//print a right aligned triangle of stars

#include<stdio.h>

int main(){

 int n=8;


for(int i=1;i<=n;i++){
    printf("\n");
    for(int k=1;k<=(n-i);k++){
        printf(" ");
    }
    for(int j=1;j<=i;j++){

        printf("*");

    }
}


return 0;
}