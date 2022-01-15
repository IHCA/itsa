#include<stdio.h>  
int main(){  
    //200，(0,0)。
    int x, y;  
    while(scanf("%d %d", &x, &y)!=EOF){  
        if(x*x+y*y<=10000){  
            printf("inside\n");  
        }  
        else{  
            printf("outside\n");  
        }  
    }  
}  