#include <stdio.h>

int main(){
    int inum;

    reload:
    scanf("%d", &inum);

    if(inum!=0){
        printf("%d\n", inum);
        goto reload;
    }
}