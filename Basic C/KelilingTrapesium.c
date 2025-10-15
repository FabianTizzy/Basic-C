#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B, C, D, keliling_trapesium;

    printf("Masukkan sisi a: ");
    scanf("%d", &A);
    printf("Masukkan sisi b: ");
    scanf("%d", &B);
    printf("Masukkan sisi c: ");
    scanf("%d", &C);
    printf("Masukan sisi d: ");
    scanf("%d", &D);
    keliling_trapesium = A + B + C + D;
    printf("Keliling trapesium = %d\n", keliling_trapesium);

    return 0;
}