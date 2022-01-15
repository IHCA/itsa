#include <stdio.h>  
int main(){  
    int n, a1, a2, a3, total;  
    scanf("%d,%d,%d,%d", &n, &a1, &a2, &a3);  
    total=15*a1+20*a2+30*a3;  
    a1=a2=a3=0;  
    if(n<total){  
        printf("0\n");  
    }  
    else{  
        n-=total;  
        if(n>=50){  
            a3=n/50;  
            n=n%50;  
        }  
        if(n>=5){  
            a2=n/5;  
            n=n%5;  
        }  
        a1=n;  
        printf("%d,%d,%d\n", a1, a2, a3);  
    }  
}  