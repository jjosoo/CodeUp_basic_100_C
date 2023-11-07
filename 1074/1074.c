#include <stdio.h>

int main(){
    int inum;
    scanf("%d", &inum);

    while(inum!=0){
        printf("%d\n", inum);
        inum--;
        if(inum==0){
            break;
        }
    }
}