#include <stdio.h>
#include <stdlib.h>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define RESET "\033[0m"

int main()
{
    float A, B, C, luas_trapesium;
    int E, F, G, H, keliling_trapesium;
    float r, t, volumeTabung;
    float j, f, luasPermukaanTabung;
    printf("Masukkan alas A: ");
    scanf("%f", &A);
    printf("Masukkan alas B: ");
    scanf("%f", &B);
    printf("Masukkan tinggi: ");
    scanf("%f", &C);

    luas_trapesium = 0.5 * (A + B) * C;

    printf(RED "Luas trapesium = %.2f\n" RESET, luas_trapesium);

    printf("Masukkan sisi 1: ");
    scanf("%d", &E);
    printf("Masukkan sisi 2: ");
    scanf("%d", &F);
    printf("Masukkan sisi 3: ");
    scanf("%d", &G);
    printf("Masukkan sisi 4: ");
    scanf("%d", &H);

    keliling_trapesium = E + F + G + H;

    printf(YELLOW "Keliling trapesium = %d\n" RESET, keliling_trapesium);

    printf(GREEN "Jadi Hasilnya : \n" BLUE "Luas trapesium = %.2f\nKeliling trapesium = %d\n" RESET, luas_trapesium, keliling_trapesium);

    printf("Masukkan Jari Jari Tabung: ");
    scanf("%f", &r);
    printf("Masukkan Tinggi Tabung: ");
    scanf("%f", &t);

    volumeTabung = 3.14 * r * r * t;

    printf(RED "Volume Tabung = %.2f cm^3\n" RESET, volumeTabung);

    printf("Masukkan Jari Jari Tabung: ");
    scanf("%f", &j);
    printf("Masukkan Tinggi Tabung: ");
    scanf("%f", &f);

    luasPermukaanTabung = 2 * 3.14 * j * (j + f);

    printf(YELLOW "Luas Permukaan Tabung = %.2f cm^2\n" RESET, luasPermukaanTabung);

    printf(GREEN "Jadi Hasilnya : \n" BLUE "Volume Tabung = %.2f\n Luas Permukaan = %.2f\n" RESET, volumeTabung, luasPermukaanTabung);
    return 0;
}