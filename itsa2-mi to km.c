#include<stdio.h>  
int main(){  
    int mi;  
    double km;  
    while(scanf("%d", &mi)!=EOF){  
        km=mi*1.6;  
        printf("%.1f\n", km);  
    }  
}