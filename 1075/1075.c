#include <stdio.h>

int main(){
    int inum;
    scanf("%d", &inum);

    while(inum!=0){
        inum--;
        printf("%d\n", inum);
    }
}