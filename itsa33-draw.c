#include <stdio.h>  
/*
2
 *
***
 *
*/
int main(){  
    int input, i, j;  
    scanf("%d", &input);  
    for(i=0; i<input; i++){  
        for(j=input-i-1; j>0; j--){  
            printf(" ");  
        }  
        for(j=0; j<i*2+1; j++){  
            printf("*");  
        }  
        printf("\n");  
    }  
    for(i=0; i<input-1; i++){  
        for(j=0; j<i+1; j++){  
            printf(" ");  
        }  
        for(j=2*(input-i-1)-1; j>0; j--){  
            printf("*");  
        }  
        printf("\n");  
    }  
}  