#include<stdio.h> 
//f(n)=n+1 n=0||n=1
//f(n)=f(n-1)+f(n/2) n>1 
int recursive(int n){  
    if(n==0||n==1){  
        return n+1;  
    }  
    else{  
        return recursive(n-1)+recursive(n/2);  
    }  
}  
int main(){  
    int input, output;  
    scanf("%d", &input);  
    output=recursive(input);  
    printf("%d\n", output);  
}  