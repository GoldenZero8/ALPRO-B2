// Nama : Arya Dheffan S
// NIM : 24060121140160
// Kelas : B2
// Deskripsi : Menampilkan susunan "*" sesuai perintah
//----------------------------------------------------------------------------------

#include <string.h>
#include <stdio.h>

// Triangle * pattern

int main(){
    // Kamus
    int N, i, j;

    // Algoritma
    printf("Masukkan angka: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n"); // Buat line baru
    }
    return 0;
}
