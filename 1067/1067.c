#include <stdio.h>

int main(){
    int inum;

    scanf("%d", &inum);
    
    if(inum>=0){
        printf("plus\n");
        if(inum%2==0){
            printf("even\n");
        }else{
            printf("odd\n");
        }
    }else{
        printf("minus\n");
                if(inum%2==0){
            printf("even\n");
        }else{
            printf("odd\n");
        }
    }


}