#include <stdio.h>

int main(){
    int inum1;
    int inum2;
    int inum3;

    scanf("%d %d %d", &inum1, &inum2, &inum3);
    printf("%d", (inum1>inum2 ? inum2 : inum1)>inum3 ? inum3 : (inum1>inum2? inum2 : inum1));
}