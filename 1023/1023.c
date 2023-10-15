#include <stdio.h>

int main(){
    char string[2001];
    fgets(string,2000,stdin);
    printf("%s",string);
}