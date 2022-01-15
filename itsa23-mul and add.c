#include <stdio.h> 
//input 3, 10^3=1000, every number below 1000 whose every number add and mul is the same number 
int main(){  
    int input, times=1, mul, add, tmp;  
    scanf("%d", &input);  
    for(int i=0; i<input-1; i++){  
        times*=10;  
    }  
    for(int i=1; i<times; i++){  
        tmp=i;  
        mul=1;  
        add=0;  
        while(tmp!=0){  
            mul=mul*(tmp%10);  
            add=add+(tmp%10);  
            tmp=tmp/10;  
        }  
        if(mul==add){  
            printf("%d\n", i);  
        }  
    }  
}  