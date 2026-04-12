//print the below pattern 
//     5
//    545 
//   54345
//  5432345
// 543212345

#include<stdio.h>

int main(){

    int numLines =5;

    int iterate=6;

    for(int i=1;i<=numLines;i++){
        iterate=6;
        for(int k=1;k<=numLines -i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
             iterate--;
             printf("%d",iterate);

        }
         for(int j=1;j<=i-1;j++){
             iterate++;
             printf("%d",iterate);

        }
       
        printf("\n");
    }

    return 0;
}