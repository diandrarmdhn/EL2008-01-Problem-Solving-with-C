#include <stdio.h>

int main () {
    char namafile [50];
    unsigned char byte[5]; 

    printf("Nama file: "); 
    scanf("%s", namafile);
    
    FILE *filep;
    filep = fopen(namafile,"r");
    if (filep != NULL)
    {
        fread(byte, 5, 1, filep);
        printf("%x %x %x %x %x\n", byte[0],byte[1],byte[2],byte[3],byte[4]);

        if ((byte[0] == 0x25) && (byte[1] == 0x50) && (byte[2] == 0x44) 
            && (byte[3] == 0x46) && (byte[4] == 0x2d)){
            printf("File merupakan PDF\n");
        } 
        else if ((byte[0] == 0xFF) && (byte[1] == 0xd8) && (byte[2] == 0xFF)) {
            printf("File merupakan JPG\n");
        } 
        else {
            printf("File bukan merupakan file JPG maupun PDF\n");
        }
    }
    fclose(filep);
    return 0;
}
