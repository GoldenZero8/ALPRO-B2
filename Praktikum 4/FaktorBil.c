// Nama : Arya Dheffan S
// NIM : 24060121140160
// Kelas : B2
// Deskripsi : Memprint nilai faktor dari inputan angka
//----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(){
    // Kamus
    int num, i;

    // Algoritma
    printf("Insert the number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++){
        if (num % i == 0){
            printf("%d ", i);
        }
    }
}
