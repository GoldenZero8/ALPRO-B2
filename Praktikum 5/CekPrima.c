// Nama : Arya Dheffan S
// NIM : 24060121140160
// Kelas : B2
// Deskripsi : Memnentukan jika input bilangan merupakan bilangan prima
//----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
// Prime checker

// Contoh input : 5
// 5 mod 1 = 0 chk+1
// 5 mod 2 = 1
// 5 mod 3 = 2
// 5 mod 4 = 3
// 5 mod 5 = 0 chk+1


int main(){
    // Kamus
    int num, i, chk=0;

    // Algoritma
    printf("Insert the number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++){ // Cek jika input angka bisa dibagi dengan i[1..num]
        if (num % i == 0){
            chk++;
        }
    }
    if (chk == 2){
        printf("%d is a prime number\n", num);
    }
    else{
        printf("%d is not a prime number\n", num);
    }
}
