#include <stdio.h>

int main(){
    char char1;
    scanf("%c", &char1);
    
    switch(char1){
        case 'A':
            printf("best!!!");
            break;
        case 'B':
            printf("good!!");
            break;
        case 'C':
            printf("run!");
            break;
        case 'D':
            printf("slowly~");
            break;
        default:
            printf("what?");
    }
}