/* 
*****     * ***** ***** *   * ***** *     ***** ***** ***** 
*   *     *     *     * *   * *     *         * *   * *   * 
*   *     * ***** ***** ***** ***** *****     * ***** ***** 
*   *     * *         *     *     * *   *     * *   *     * 
*****     * ***** *****     * ***** *****     * *****     * 
*/  
#include<stdio.h>  
int main(){  
    int i;  
    char input[16];  
    while(scanf("%s", input)!=EOF){  
        for(i=0; i<4; i++){  
            if(input[i]=='0'||input[i]=='2'||input[i]=='3'||input[i]=='5'||input[i]=='7'||input[i]=='8'||input[i]=='9'){  
                printf("*****");  
            }  
            else if(input[i]=='1'){  
                printf("    *");  
            }  
            else if(input[i]=='4'){  
                printf("*   *");  
            }  
            else if(input[i]=='6'){  
                printf("*    ");  
            }  
            if(i!=3){  
                printf(" ");  
            }  
            else{  
                printf("\n");  
            }  
        }  
        for(int i=0; i<4; i++){  
            if(input[i]=='0'||input[i]=='4'||input[i]=='8'||input[i]=='9'){  
                printf("*   *");  
            }  
            else if(input[i]=='1'||input[i]=='2'||input[i]=='3'||input[i]=='7'){  
                printf("    *");  
            }  
            else if(input[i]=='5'||input[i]=='6'){  
                printf("*    ");  
            }  
            if(i!=3){  
                printf(" ");  
            }  
            else{  
                printf("\n");  
            }  
        }  
        for(int i=0; i<4; i++){  
            if(input[i]=='2'||input[i]=='3'||input[i]=='4'||input[i]=='5'||input[i]=='6'||input[i]=='8'||input[i]=='9'){  
                printf("*****");  
            }  
            else if(input[i]=='1'||input[i]=='7'){  
                printf("    *");  
            }  
            else if(input[i]=='0'){  
                printf("*   *");  
            }  
            if(i!=3){  
                printf(" ");  
            }  
            else{  
                printf("\n");  
            }  
        }  
        for(int i=0; i<4; i++){  
            if(input[i]=='0'||input[i]=='6'||input[i]=='8'){  
                printf("*   *");  
            }  
            else if(input[i]=='1'||input[i]=='3'||input[i]=='4'||input[i]=='5'||input[i]=='7'||input[i]=='9'){  
                printf("    *");  
            }  
            else if(input[i]=='2'){  
                printf("*    ");  
            }  
            if(i!=3){  
                printf(" ");  
            }  
            else{  
                printf("\n");  
            }  
        }  
        for(int i=0; i<4; i++){  
            if(input[i]=='1'||input[i]=='4'||input[i]=='7'||input[i]=='9'){  
                printf("    *");  
            }  
            else{  
                printf("*****");  
            }  
            if(i!=3){  
                printf(" ");  
            }  
            else{  
                printf("\n");  
            }  
        }  
    }  
} 