#include <stdio.h>  
int main(){  
    int len, gen;  
    float wei;  
    while(scanf("%d %d", &len, &gen)!=EOF){  
        if(gen==1){  
            wei=(float)(len-80)*0.7;  
        }  
        else{  
            wei=(float)(len-70)*0.6;  
        }  
        printf("%.1f\n", wei);  
    }  
}  