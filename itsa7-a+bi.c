#include <stdio.h>  
#include <ctype.h>  
int main()  
{  
    int real1, imaginary1, real2, imaginary2, repeattimes;  
    char calculate;  
    scanf("%d", &repeattimes);  
    for(int i=0; i<repeattimes; i++){  
        scanf("%c", &calculate);  
        while(calculate!='+'&&calculate!='-'&&calculate!='*'){  
            scanf("%c", &calculate);  
        }  
        scanf("%d%d%d%d", &real1, &imaginary1, &real2, &imaginary2);  
        if(calculate=='+'){  
            printf("%d %d\n", real1+real2, imaginary1+imaginary2);  
        }  
        else if(calculate=='-'){  
            printf("%d %d\n", real1-real2, imaginary1-imaginary2);  
        }  
        else if(calculate=='*'){  
            printf("%d %d\n", real1*real2-imaginary1*imaginary2, real1*imaginary2+real2*imaginary1);  
        }  
    }   
}