//print right alligned pyramid of alphabets 

#include<stdio.h>

int main(){

    int numLines=5;
    int iterate=64;

    for(int i=1;i<=numLines;i++){

        for(int k=1;k<=2*(numLines-i)-1;k++){
            printf(" ");

        }

        for(int j=1;j<=2*i-1;j++){
            iterate++;
            if(iterate==91){
             iterate=65;
            }
            printf("%c",(char)iterate);

        }
        printf("\n");
    }

    
 

    return 0;
}
