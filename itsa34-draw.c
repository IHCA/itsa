#include <stdio.h>  
/*
3
  *********

 ***********

*************

*/


int main(){  
    int input, i, j;  
    scanf("%d", &input);  
    if(input==0)printf("No answer\n");  
    else{  
        for(j=0; j<input; j++){  
            for(i=input-j-1; i>0; i--){  
                printf(" ");  
            }  
            for(i=0; i<9+2*j; i++){  
                printf("*");  
            }  
            printf("\n");  
        }  
    }  
} 