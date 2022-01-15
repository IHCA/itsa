#include<stdio.h>  
#include<string.h> 
//15 to 00001111
//-2 to 11111110 
int main(){  
    int input;  
    char output[16];  
    while(scanf("%d", &input)!=EOF){  
        if(input<0){  
            output[0]='1';  
            input=-1-input;  
        }  
        else{  
            output[0]='0';  
        }  
        if(input>=64){  
            output[1]='1';  
            input-=64;  
        }  
        else{  
            output[1]='0';  
        }  
        if(input>=32){  
            output[2]='1';  
            input-=32;  
        }  
        else{  
            output[2]='0';  
        }  
        if(input>=16){  
            output[3]='1';  
            input-=16;  
        }  
        else{  
            output[3]='0';  
        }  
        if(input>=8){  
            output[4]='1';  
            input-=8;  
        }  
        else{  
            output[4]='0';  
        }  
        if(input>=4){  
            output[5]='1';  
            input-=4;  
        }  
        else{  
            output[5]='0';  
        }  
        if(input>=2){  
            output[6]='1';  
            input-=2;  
        }  
        else{  
            output[6]='0';  
        }  
        if(input>=1){  
            output[7]='1';  
        }  
        else{  
            output[7]='0';  
        }  
        if(output[0]=='1'){  
            for(int i=1;i<8;i++){  
                if(output[i]=='0'){  
                    output[i]='1';  
                }  
                else{  
                    output[i]='0';  
                }  
            }  
        }  
        output[8]='\0';  
        printf("%s\n", output);  
    }  
}  