// Nama : Arya Dheffan S
// NIM : 24060121140160
// Kelas : B2
// Deskripsi : Menentukan biayatarif berdasarkan pemakaian daya dan golongan
//----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(){
    // Kamus
    int tarif, daya;

    // Algoritma
    printf("Masukkan pemakaian daya listrik (dalam kWH): ");
    scanf("%d", &daya);
    printf("Masukkan golongan tarif: ");
    scanf("%d", &tarif);

    if (daya > 0 && daya < 1000){
        switch(tarif){
            case 1:
                printf("Besar tarif = %d\n", 1000 * daya);
                break;
            case 2:
                printf("Besar tarif = %d\n", 2000 * daya);
                break;
            default:
                printf("Golongan tidak ditemukan");
                break;
        }
    }
    else if (daya >= 1000){
        switch(tarif){
            case 1:
                printf("Besar tarif = %d\n", 110 * (1000 * daya) / 100);
                break;
            case 2:
                printf("Besar tarif = %d\n", 110 * (2000 * daya) / 100);
                break;
            default:
                printf("Golongan tidak ditemukan");
                break;
        }
    }
    else{
        printf("Daya tidak boleh kurang atau sama dengan dari 0 kWH\n");
    }
}
