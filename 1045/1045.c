#include <stdio.h>

int main()
{
    int inum1, inum2;
    scanf("%d %d", &inum1, &inum2);
    printf("%lld\n", (long long int)inum1 + inum2);
    printf("%d\n", inum1 - inum2);
    printf("%lld\n", (long long int)inum1 * inum2);
    printf("%d\n", inum1 / inum2);
    printf("%d\n", inum1 % inum2);
    printf("%.2lf\n", (double)inum1 / inum2);
}