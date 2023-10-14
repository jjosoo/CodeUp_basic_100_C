#include <stdio.h>

int main()
{
    int inum1, inum2;

    scanf("%d-%d", &inum1, &inum2);
    printf("%06d%07d", inum1, inum2);
}