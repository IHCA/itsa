#include <stdio.h>  
int main()  
{  
    int inputnum, isprime=1;  
    while(scanf("%d", &inputnum)!=EOF){  
        for(int i=2; i<inputnum/2; i++){  
            if(inputnum%i==0){  
                printf("NO\n");  
                isprime=0;  
                break;  
            }  
        }  
        if(isprime==1){  
            printf("YES\n");  
        }  
    }  
  
    return 0;  
}  