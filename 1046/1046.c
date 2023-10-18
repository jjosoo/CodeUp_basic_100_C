#include <stdio.h>

int main()
{
    int inum1, inum2, inum3;
    long long int sum;
    double avg;

    scanf("%d %d %d", &inum1, &inum2, &inum3);

    sum = inum1 + inum2 + inum3;
    avg = (double)sum / 3;

    printf("%lld\n", sum);
    printf("%.1lf", avg);
}