// Nama : Arya Dheffan S
// NIM : 24060121140160
// Kelas : B2
// Deskripsi : Menentukan kpk dari bilangan
//----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Least Common Multiple
int main(){
    int n, N[n], i, j, kel = 1;
    printf("Masukkan banyak angka: ");
    scanf("%d", &n);
    if (n > 0){
        for (i = 0; i < n; i++){
            printf("Masukkan angka ke-%d (Dari terkecil): ", i+1);
            scanf("%d", &N[i]);
        }
        for (j = 0; j < n; j++){
            if (N[j] % kel == 0) {
                kel = N[j];
            }
            else{
                kel = kel * N[j];
            }
        }
        printf("KPK = %d", kel);
    }
    else {
        printf("Invalid");
    }
    
    return 0;
}
