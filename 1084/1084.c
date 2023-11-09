#include <stdio.h>

int main(){
    int inum1, inum2, inum3;
    scanf("%d %d %d", &inum1, &inum2, &inum3);

    int icount = 0;

    for(int i=0; i<inum1; i++){
        for(int j=0; j<inum2; j++){
            for(int k=0; k<inum3; k++){
                printf("%d %d %d\n", i, j, k);
                icount++;
            }
        }
    }printf("%d", icount);
}