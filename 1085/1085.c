#include <stdio.h>

int main(){
    float fnum1, fnum2, fnum3, fnum4;
    scanf("%f %f %f %f", &fnum1, &fnum2, &fnum3, &fnum4);

    float fresult = fnum1*fnum2*fnum3*fnum4;

    fresult = fresult/8/1024/1024;

    printf("%.1f MB ", fresult);
}