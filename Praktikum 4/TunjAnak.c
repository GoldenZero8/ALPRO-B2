// Nama : Arya Dheffan S
// NIM : 24060121140160
// Kelas : B2
// Deskripsi : Menentukan biaya tunjangan anak berdasarkan gaji pokok
//----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(){
    // Kamus
    int jmlh, gpokok;

    printf("Masukkan jumlah anak: ");
    scanf("%d", &jmlh);
    printf("Masukkan gaji pokok: ");
    scanf("%d", &gpokok);

    // Algoritma
    if (jmlh >= 0 && gpokok >= 0){
        if(jmlh <= 3){
            printf("Tunjangan anak = %d x (10%% x gaji pokok) = %d\n", jmlh, jmlh * (10 * gpokok) / 100);
        }
        else{
            printf("Tunjangan anak = 3 x (10%% x gaji pokok) = %d\n", jmlh, 3 * (10 * gpokok) / 100);
        }
        
    }
    else{
        printf("Jumlah anak dan gaji pokok tidak boleh kurang dari 0\n");
    }

}
