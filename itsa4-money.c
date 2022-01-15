#include<stdio.h> 
//0~2h-30/0.5
//2~4h-40/0.5
//60/0.5 
int main(){  
    int inhour, inmin, outhour, outmin, totaltime;  
    while(scanf("%d %d %d %d", &inhour, &inmin, &outhour, &outmin)!=EOF){  
        if((outhour-inhour)==0){  
            totaltime=outmin-inmin;  
        }  
        else{  
            totaltime=60*(outhour-inhour-1)+60-inmin+outmin;  
        }  
        if(totaltime<=120){  
            printf("%d\n", totaltime/30*30);  
        }  
        else if(totaltime<=240){  
            printf("%d\n", (totaltime-120)/30*40+120);  
        }  
        else{  
            printf("%d\n", (totaltime-240)/30*60+280);  
        }  
    }  
}  