#include <stdio.h>

int main(){
    int year,month,day;
    scanf("%d.%d.%d",&year,&month,&day);

    printf("%02d-%02d-%4d",day,month,year);
}