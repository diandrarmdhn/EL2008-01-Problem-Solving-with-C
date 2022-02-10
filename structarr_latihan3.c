#include <stdio.h>
#include <string.h>
#define maks 5

struct mhs {
    char nama[30];
    int nim;
    float kehadiran;
};

int main()
{
    int i;
    int a;
    struct mhs arr_mhs[maks];

    for (i=0; i<maks; i++)
    {
        printf("Masukkan data mahasiswa %d\n", i+1);

        printf("Masukkan nama : ");
        scanf("%s", arr_mhs[i].nama);
        printf("Masukkan NIM mahasiswa : ");
        scanf("%d", &arr_mhs[i].nim);
        printf("Masukkan persentase kehadiran : ");
        scanf("%f", &arr_mhs[i].kehadiran);
        printf("\n");
    }
    printf("-Mahasiswa dengan jumlah kehadiran kurang dari minimal kehadiran-\n");
    
    for(i=0; i<maks; i++)
    {
        if (arr_mhs[i].kehadiran < 80)
        {
            printf("Nama : %s \t NIM : %d \n", arr_mhs[i].nama, arr_mhs[i].nim);
        }
    }
    return 0;
}
