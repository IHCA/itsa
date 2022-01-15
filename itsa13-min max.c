#include<stdio.h>  
int main(){  
    float max, min, input;  
    int i;  
    scanf("%f", &input);  
    max=min=input;  
    for(i=0; i<9; i++){  
        scanf("%f", &input);  
        if(input>max){  
            max=input;  
        }  
        if(input<min){  
            min=input;  
        }  
    }  
    printf("maximum:%.2f\nminimum:%.2f\n", max, min);  
} 