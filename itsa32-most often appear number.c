#include <stdio.h>  
int main(){  
    char c;  
    int num[10], time;  
    for(int i=0; i<10; i++){  
        num[i]=0;  
    }  
    while((c=getchar())!=EOF){  
        if(c=='0'){  
            num[0]++;  
        }  
        else if(c=='1'){  
            num[1]++;  
        }  
        else if(c=='2'){  
            num[2]++;  
        }  
        else if(c=='3'){  
            num[3]++;  
        }  
        else if(c=='4'){  
            num[4]++;  
        }  
        else if(c=='5'){  
            num[5]++;  
        }  
        else if(c=='6'){  
            num[6]++;  
        }  
        else if(c=='7'){  
            num[7]++;  
        }  
        else if(c=='8'){  
            num[8]++;  
        }  
        else if(c=='9'){  
            num[9]++;  
        }  
    }  
    time=num[0];  
    for(int i=1; i<10; i++){  
        if(num[i]>time){  
            time=num[i];  
        }  
    }  
    for(int i=0; i<10; i++){  
        if(time==num[i]){  
            printf("Number is %d\n", i);  
        }  
    }  
}  