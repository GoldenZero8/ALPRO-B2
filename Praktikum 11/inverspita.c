/*Nama File 	: InversPita*/
/*Deskripsi 	: Mesin abstrak untuk menampilkan kalimat dalam sebuah pita dalam keadaan terbalik(invers)*/
/*Nama - NIM  	: 24060121140160 - Arya Dheffan S*/
/*Tgl Pembuatan	: Selasa, 17 Mei 2022*/

#include <stdio.h>
#include <conio.h>
#include "mesinint.c"
#include "mesinkar.c"

int main(){
    //Kamus
    int length;
    char str[100];
    int i;

    //Algoritma
    length = HitungChar();
    printf("=====MESIN INVERS PITA=====\n");

    if (length > 100){
        printf("Karakter dalam pita maksimal 100 termasuk titik\n");
    }
    else{
        START();
        i = 0;
        while(!EOP()){
            str[i] = CC;
            ADV();
            i++;
        }

        printf("Pita dibaca = ");
        for (int i = 0; i < length; i++){
            printf("%c", str[i]);
        }

        printf("\nPita inverse = ");
        // Mari kita inverskan
        for (int i = 0; i < length; i++){
            printf("%c", str[length-i-1]);
        }
    }

    getch();
    return 0;
}
