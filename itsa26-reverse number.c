#include <stdio.h>  
int main(){  
    long long input, output=0;  
    while(scanf("%lld", &input)!=EOF){  
        output=0;  
        while(input!=0){  
            output=output*10+(input%10);  
            input=input/10;  
        }  
        printf("%lld\n", output);  
    }  
}  