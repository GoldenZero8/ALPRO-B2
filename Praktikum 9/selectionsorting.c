// Nama : Arya Dheffan S
// NIM : 24060121140160
// Kelas : B2
// Deskripsi : Mengurutkan data dengan selection sort
//----------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

void selectionsort(int T[], int N){
    int i, j, min, temp;
    for (i = 0; i < N-1; i++){
        min = i;
        for (j = i+1; j < N; j++){
            if (T[j] < T[min]){
                min = j;
            }
        }
        temp = T[i];
        T[i] = T[min];
        T[min] = temp;
    }
}

int main(){
    // Kamus
    int array[100], n, i, j;
    // Algoritma
    printf("Input the number of elements: ");
    scanf("%d", &n);
    printf("Input the elements: ");
    for (i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    selectionsort(array, n);
    printf("Sorted list: ");
    for (i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
