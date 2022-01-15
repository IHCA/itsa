#include <stdio.h>  
#include <string.h>  
//123321 YES
//1244221 NO
int main(){  
    char input[100];  
    int len, state=0;  
    scanf("%s", input);  
    len=strlen(input);  
    for(int i=0; i<len/2; i++){  
        if(input[i]!=input[len-1-i]){  
            printf("NO\n");  
            state=1;  
            break;  
        }  
    }  
    if(state==0){  
        printf("YES\n");  
    }  
}  