#include <stdio.h>

int main(){
    int inum;
    
    while(inum!=0){
        scanf("%d", &inum);
        if(inum==0){
            break;
        }
        printf("%d\n", inum);
    }
}