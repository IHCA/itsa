#include <stdio.h>  
//add all the number betweens 1 and inputnum can be divide by 3
int main()  
{  
    int inputnum, outputnum;  
    while(scanf("%d", &inputnum)!=EOF){  
        outputnum=0;  
        for(int i=1; i<=inputnum; i++){  
            if(i%3==0)outputnum+=i;  
        }  
        printf("%d\n", outputnum);  
    }  
    return 0;  
} 