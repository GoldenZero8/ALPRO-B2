// Nama : Arya Dheffan S
// NIM : 24060121140160
// Kelas : B2
// Deskripsi : Menampilkan susunan "*" sesuai perintah
//----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

// Reverse triangle * patterns
int main(){
    int N;
    printf("Masukkan angka: ");
    scanf("%d", &N);
    int i, j;
    for(i=N; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n"); // Buat line baru
    }
    return 0;
}
