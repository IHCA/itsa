#include <stdio.h>  
#include <string.h>  
int main(){  
    int x, y, x1, y1;  
    float m;  
    scanf("%d %d %d %d", &x, &y, &x1, &y1);  
    m=(y-y1)/(x-x1);  
    printf("%.f\n", m);  
} 