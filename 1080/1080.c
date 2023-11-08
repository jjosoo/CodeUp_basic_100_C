#include <stdio.h>

int main(){
    int inum;
    scanf("%d", &inum);

    int isum = 0;
    int i;
    for(i=1;isum<=inum;i++){
        isum+=i;
        if(isum>=inum){
            printf("%d",i);
            break;
        }
    }

}