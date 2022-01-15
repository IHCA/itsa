#include <stdio.h>  
/*
5 3
*****
*****
*****
*/
int main(){  
    int m, n, i, j;  
    scanf("%d %d", &m, &n);  
    if(n==0||m==0){  
        printf("no answer\n");  
    }  
    else{  
        for(i=0; i<n; i++){  
            for(j=0; j<m; j++){  
                printf("*");  
            }  
            printf("\n");  
        }  
    }  
}  