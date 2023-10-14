#include <stdio.h>

int main(){
    int inum1,inum2,inum3;

    scanf("%d.%d.%d",&inum1,&inum2,&inum3);
    printf("%04d.%02d.%02d",inum1,inum2,inum3);
}