#include<stdio.h>  
#include<string.h>  
int main(){  
    int month;  
    while(scanf("%d", &month)!=EOF){  
        if(3<=month&&month<=5){  
            printf("Spring\n");  
        }  
        else if(6<=month&&8>=month){  
            printf("Summer\n");  
        }  
        else if(9<=month&&11>=month){  
            printf("Autumn\n");  
        }  
        else{  
            printf("Winter\n");  
        }  
    }  
}