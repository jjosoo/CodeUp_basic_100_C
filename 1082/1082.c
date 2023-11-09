#include <stdio.h>

int main(){
    int inum;
    scanf("%X", &inum);

    for(int i=1;i<=15;i++){
        printf("%X*%X=%X\n", inum, i, inum*i);
    }
}