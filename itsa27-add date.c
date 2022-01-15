#include <stdio.h>  
#include <stdlib.h>  
//input 1985 2 20 -> 1+9+8+5+0+2+2+0=27 -> 2+7=9 ->output 9
int main(){  
    int a, b, c, output=0, tmp;  
    scanf("%d %d %d", &a, &b, &c);  
    while(a!=0){  
        output+=a%10;  
        a=a/10;  
    }  
    while(b!=0){  
        output+=b%10;  
        b=b/10;  
    }  
    while(c!=0){  
        output+=c%10;  
        c=c/10;  
    }  
    while(output>=10){  
        tmp=output;  
        output=0;  
        while(tmp!=0){  
            output+=tmp%10;  
            tmp=tmp/10;  
        }  
    }  
    printf("%d\n", output);  
}