#include <stdio.h>

int main()
{
    float s, luas_persegi, luas_segitiga, luas_merah;

    printf("Masukkan panjang sisi persegi: ");
    scanf("%f", &s);

    luas_persegi = s * s;

    luas_segitiga = 0.5 * s * (s / 2);

    luas_merah = luas_persegi - luas_segitiga;

    printf("Luas daerah merah = %.2f\n", luas_merah);

    return 0;
}