#include <stdio.h>  
int main(){  
    int a, b, c, tmp;  
    scanf("%d %d %d", &a, &b, &c);  
    if(a>b){  
        tmp=b;  
        b=a;  
        a=tmp;  
    }  
    if(a>c){  
        tmp=a;  
        a=c;  
        c=tmp;  
    }  
    if(b>c){  
        tmp=b;  
        b=c;  
        c=tmp;  
    }  
    if((a+b)<=c){  
        printf("Less than the third side\n");  
    }  
    else{  
        printf("Bigger than the third side\n");  
    }  
}  