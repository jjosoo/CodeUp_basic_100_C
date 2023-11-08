#include <stdio.h>

int main(){
    char char1;
    scanf("%c", &char1);
    
    char char2 = 'a';

    do{
        printf("%c ", char2);
        char2++;
    }while (char2 <= char1);
}