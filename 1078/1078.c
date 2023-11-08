#include <stdio.h>

int main(){
    int inum;
    scanf("%d", &inum);

    int isum = 0;

    for(int i=1;i<=inum;i++){
        if(i%2==0){
            isum+=i;
        }
    }

    printf("%d", isum);
}