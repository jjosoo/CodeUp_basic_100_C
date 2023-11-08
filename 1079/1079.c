#include <stdio.h>

int main(){
    char char1;

    while(char1!='q'){
        scanf("%c",&char1);
        printf("%c",char1);
        if(char1=='q'){
            break;
        }
    }
}