// Nama : Arya Dheffan S
// NIM : 24060121140160
// Kelas : B2
// Deskripsi : Menentukan output hari dari inputan angka
//----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(){
    // Kamus
    int num;

    // Algoritma
    printf("Enter a number: ");
    scanf("%d", &num);
    switch(num){
        case 1: 
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
            break;
    }
}
