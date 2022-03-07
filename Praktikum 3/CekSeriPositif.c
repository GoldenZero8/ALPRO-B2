// Nama : Arya Dheffan S
// NIM : 24060121140160
// Kelas : B2
// Deskripsi : Mengeluarkan output angka dari inputan jika int > 0
//----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(){
    // Kamus
    int num1, num2, num3;

    // Algoritma
    printf("Masukkan nomor tahanan 1: ");
    scanf("%d", &num1);
    printf("Masukkan nomor tahanan 2: ");
    scanf("%d", &num2);
    printf("Masukkan nomor tahanan 3: ");
    scanf("%d", &num3);
    if(num1 < 0 || num2 < 0 || num3 < 0){
        printf("Masukan tahanan tidak boleh negatif");
    }
    else{
        printf("Tahanan 1 : %d\n", num1);
        printf("Tahanan 2 : %d\n", num2);
        printf("Tahanan 3 : %d\n", num3);
    }
}
