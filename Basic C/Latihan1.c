#include <stdio.h>
#include <stdlib.h>

int main()
{
    int umur, jml_sdr, anakke, jml_anak;
    printf("Masukan Umur!\n");
    scanf("%d", &umur);
    printf("Masukan Jumlah Saudara!\n");
    scanf("%d", &jml_sdr);
    printf("Masukan Anak Ke?\n");
    scanf("%d", &anakke);
    jml_anak = jml_sdr + anakke;
    printf("Saya berumur %d Anak ke %d Dari %d bersaudara", umur, anakke, jml_anak);
    return 0;
}
