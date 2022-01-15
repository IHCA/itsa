#include <stdio.h>  
int main(){  
    int num[4], tmp;  
    scanf("%d %d %d %d", &num[0], &num[1], &num[2], &num[3]);  
    for(int i=0; i<3; i++){  
        for(int j=0; j<3; j++){  
            if(num[j]>num[j+1]){  
                tmp=num[j];  
                num[j]=num[j+1];  
                num[j+1]=tmp;  
            }  
        }  
    }  
    if(num[0]==num[1]&&num[1]==num[2]&&num[2]==num[3]){  
        printf("WIN\n");  
    }  
    else if((num[0]==num[1]&&num[1]==num[2])||(num[1]==num[2]&&num[2]==num[3])){  
        printf("R\n");  
    }  
    else if(num[0]==num[1]){  
        if(num[2]==num[3]){  
            printf("%d\n", 2*num[2]);  
        }  
        else{  
            printf("%d\n", num[2]+num[3]);  
        }  
    }  
    else if(num[1]==num[2]){  
        printf("%d\n", num[0]+num[3]);  
    }  
    else if(num[2]==num[3]){  
        printf("%d\n", num[0]+num[1]);  
    }  
    else{  
        printf("R\n");  
    }  
} 