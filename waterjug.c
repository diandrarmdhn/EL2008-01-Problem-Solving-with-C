#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int pilihan;
    printf("Selamat datang di Game Water Jug! \nDapatkan air 4 liter dengan menggunakan teko berukuran 3 liter dan 5 liter");

    while (b != 4)
    {
        printf("\nPermainan berakhir ketika teko berisi 4 liter air \n");
        printf("\nteko 3 liter\t\t teko 5 liter\n");
        printf("%6d \t\t\t %6d", a,b);
        printf("\nPilih instruksi:\n");
        printf("1. isi teko 3 liter\n");
        printf("2. isi teko 5 liter\n");
        printf("3. kosongkan teko 3 liter\n");
        printf("4. kosongkan teko 5 liter\n");
        printf("5. tuangkan isi teko 3 liter ke dalam teko 5 liter\n");
        printf("6. tuangkan isi teko 5 liter ke dalam teko 3 liter\n");
        printf("Nomor instruksi yang dipilih : ");
        scanf("%d", &pilihan);
        printf("\n");

        if (pilihan == 1){
            a = 3;
        }else if (pilihan == 2){
            b = 5;
        }else if (pilihan == 3){
            a = 0;
        }else if (pilihan == 4){
            b = 0;
        }else if (pilihan == 5){
            if (a > 0){
                b = a+b;
                if (b>5){
                    a = b-5;
                    b = b-a;
                } else{
                    a = 0;
                }
            }
        }else if (pilihan == 6){
            if (b>0){
                a = a+b;
                if (a>3){
                    b = a-3;
                    a = a-b;
                }else{
                    b = a-b;
                    a = a-b;
                }
            }
        }
    }
    printf("\nteko 3 liter\t\t teko 5 liter\n");
    printf("%6d \t\t\t %6d", a,b);
    printf("\nSelamat Anda telah menyelesaikan game ini!");
    return 0;
}