// Nama : Arya Dheffan S
// NIM : 24060121140160
// Kelas : B2
// Deskripsi : Membentuk matriks persegi dengan nilai diagonalnya = 1, nilai serong kiri bawahnya = 2, dan nilai serong kanan atasnya = 0
//----------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[2], i, j;
    printf("Masukkan panjang matriks M: ");
    scanf("%d", &A[0]);
    printf("Masukkan lebar matriks N: ");
    scanf("%d", &A[1]);
    if (A[0] == A[1]){
        for (i=1; i<=A[0]; i++){
            for (j=1; j<=A[1]; j++){
                if (i == j){
                    printf("1 ");
                }
                else if(i < j){
                    printf("0 ");
                }
                else{
                    printf("2 ");
                }
            }
        printf("\n");
        }
    }
    else{
        printf("Nilai matriks harus sama");
    }
    
}
