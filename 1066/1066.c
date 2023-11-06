#include <stdio.h>

int main(){
    int inum[3];

    for(int i=0;i<3;i++){
        scanf("%d", &inum[i]);
    }

    for(int i=0;i<3;i++){
        if(inum[i]%2==0){
            printf("even\n");
        }else{
            printf("odd\n");
        }
    }
}