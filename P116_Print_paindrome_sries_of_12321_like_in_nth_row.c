//print palindrome sereis form1 to 1 in like
// 1
// 121
// 12321
// 1234321
// ...

#include<stdio.h>

int main(){

    int numLines =5;

    int iterate=0;

    for(int i=1;i<=numLines;i++){
        iterate=0;
        for(int k=1;k<=numLines -i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
             iterate++;
             printf("%d",iterate);

        }
         for(int j=1;j<=i-1;j++){
             iterate--;
             printf("%d",iterate);

        }
       
        printf("\n");
    }

    return 0;
}