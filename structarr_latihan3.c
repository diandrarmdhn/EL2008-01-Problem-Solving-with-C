#include <stdio.h>
#define maks 5

struct mhs {
    char nama[30];
    int nim;
    float kehadiran;
};

int main(){
    int i;
    struct mhs arr_mhs[maks];

    for (i=0; i<maks; i++)
    {
        printf("\n Masukkan data mahasiswa %d\n", i+1);

        printf("Masukkan nama : ");
        scanf("%s", &arr_mhs[i].nama);
        printf("Masukkan NIM mahasiswa : ");
        scanf("%d", &arr_mhs[i].nim);
        printf("Masukkan persentase kehadiran : ");
        scanf("%f", &arr_mhs[i].kehadiran);
        printf("\n")
    }
}
