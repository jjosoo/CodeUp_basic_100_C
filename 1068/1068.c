#include <stdio.h>

int main(){
    int inum;

    scanf("%d", &inum);

    if(inum>=90){
        printf("A");
    }else if(inum>=70){
        printf("B");
    }else if(inum>=40){
        printf("C");
    }else{
        printf("D");
    }
}