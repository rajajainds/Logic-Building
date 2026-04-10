//print natural numbers in nth row 
// 1
// 2 3
// 4 5 6 ..


#include<stdio.h>

int main(){

    int num =5;
    int iterate=0;

    
  for(int i=1;i<=num;i++){
        

        for(int j=1;j<=i;j++){
            iterate++;
            printf("%d ",iterate);
        }
        printf("\n");
    }



    return 0;
}