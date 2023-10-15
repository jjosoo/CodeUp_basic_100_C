#include <stdio.h>

int main(){
    char string[20];
    scanf("%s",string);
    
    for(int i=0; string[i]!='\0'; i++){
        printf("\'%c\'\n",string[i]);
    }
}