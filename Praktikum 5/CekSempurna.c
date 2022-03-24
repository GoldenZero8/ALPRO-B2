// Nama : Arya Dheffan S
// NIM : 24060121140160
// Kelas : B2
// Deskripsi : Menentukan jika input bilangan merupakan bilangan sempurna
//----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
// Perfect number checker
int main(){
    // Kamus
    int num, i, sum = 0;
  
    // Algoritma
    printf("Insert the number: ");
    scanf("%d", &num);
    for (i=1; i < num; i++){
        if (num % i == 0){
            sum += i;
        }
    }
    if (num == sum){
        printf("%d is a perfect number\n", num);
    }
    else{
        printf("%d is not a perfect number\n", num);
    }
}
