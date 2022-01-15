#include<stdio.h>  
int main(){  
    int input;  
    float outputnonsummer=0, outputsummer=0;  
    scanf("%d", &input);  
    if(input>700){  
        outputsummer+=(float)(input-700)*5.63;  
        outputnonsummer+=(float)(input-700)*4.5;  
        input=700;  
    }  
    if(input>500){  
        outputsummer+=(float)(input-500)*4.97;  
        outputnonsummer+=(float)(input-500)*4.01;  
        input=500;  
    }  
    if(input>330){  
        outputsummer+=(float)(input-330)*4.39;  
        outputnonsummer+=(float)(input-330)*3.61;  
        input=330;  
    }  
    if(input>120){  
        outputsummer+=(float)(input-120)*3.02;  
        outputnonsummer+=(float)(input-120)*2.68;  
        input=120;  
    }  
    outputsummer+=(float)input*2.1;  
    outputnonsummer+=(float)input*2.1;  
    printf("Summer months:%.2f\nNon-Summer months:%.2f\n", outputsummer, outputnonsummer);  
} 