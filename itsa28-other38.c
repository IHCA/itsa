#include <stdio.h>  
int main(){  
    int input, num=1;  
    scanf("%d", &input);  
    for(int i=input; i>0; i--){  
        printf("%d = %d\n", i, num);  
        num=num*2+2;  
    }  
} 