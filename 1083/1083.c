#include <stdio.h>

int main(){
    int inum;
    scanf("%d", &inum);

    for(int i=1; i<=inum; i++){
        if(i%3==0){
            printf("X ");
        }else{
            printf("%d ", i);
        }
    }
}