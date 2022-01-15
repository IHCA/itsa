#include <stdio.h>  
int main(){  
    int col, row, num[100][100];  
    while(scanf("%d %d", &col, &row)!=EOF){  
        for(int i=0; i<100; i++){  
            for(int j=0; j<100; j++){  
                num[i][j]='\0';  
            }  
        }  
        for(int i=0; i<col; i++){  
            for(int j=0; j<row; j++){  
                scanf("%d", &num[i][j]);  
            }  
        }  
        for(int i=0; i<row; i++){  
            for(int j=0; j<col-1; j++){  
                printf("%d ", num[j][i]);  
            }  
            printf("%d\n", num[col-1][i]);  
        }  
    }  
} 