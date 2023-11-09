#include <stdio.h>

int main(){
    int inum1;
    int inum2;

    scanf("%d %d", &inum1, &inum2);

    for(int i=1; i<=inum1; i++){
        for(int j=1; j<=inum2; j++){
            printf("%d %d\n", i, j);
        }
    }
}