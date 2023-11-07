#include <stdio.h>

int main(){
    int icount;
    scanf("%d", &icount);

    int inum;
rescanf:
    scanf("%d", &inum);

    if(icount!=0){
        printf("%d\n", inum);
        icount--;
        goto rescanf;
    }


}