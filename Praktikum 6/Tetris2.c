// Nama : Arya Dheffan S
// NIM : 24060121140160
// Kelas : B2
// Deskripsi : Menampilkan susunan "*" sesuai perintah
//----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

// Linear and reverse triangle * patterns


int main(){
    // Kamus
    int N;

    // Algoritma
    printf("Insert the number: ");
    scanf("%d", &N);
    int i, j;
    for(i=1; i<=N; i++){ // Linear
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n"); // Buat line baru
    }
    for(i=N-1; i>=1; i--){ // Reverse
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n"); // buat line baru
    }
    return 0;
}
