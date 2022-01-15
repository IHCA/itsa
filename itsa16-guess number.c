#include<stdio.h>  
#include<string.h>  
#include<stdlib.h>  
int main(){  
    char ans[10], guess[10];  
    int anum, bnum, state[10], i, j;  
    scanf("%s", ans);  
    while(ans[0]!='0'){  
        scanf("%s", guess);  
        while(strcmp(ans, guess)!=0){  
            if(guess[0]=='0'){  
                exit(1);  
            }  
            anum=bnum=0;  
            for(i=0; i<4; i++){  
                state[i]=0;  
            }  
            for(i=0; i<4; i++){  
                if(ans[i]==guess[i]){  
                    state[i]=1;  
                    anum++;  
                }  
            }  
            for(i=0; i<4; i++){  
                if(state[i]==0){  
                    for(j=0; j<4; j++){  
                        if(ans[i]==guess[j]){  
                            bnum++;  
                        }  
                    }  
                }  
            }  
            printf("%dA%dB\n", anum, bnum);  
            scanf("%s", guess);  
        }  
        printf("4A0B\n");  
        scanf("%s", ans);  
    }  
}  