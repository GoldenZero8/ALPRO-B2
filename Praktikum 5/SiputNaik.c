// Nama : Arya Dheffan S
// NIM : 24060121140160
// Kelas : B2
// Deskripsi : Menentukan hari ke barapa siput dapat naik di ketinggian N
//----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 1;
    double h = 0.00, N;
    printf("Ketinggian lubang: ");
    scanf("%lf",&N);
    do {
        if (i % 2 != 0){
            h = h + 0.3;
        }
        else{
            h = h - 0.1;
        }
        i++;
    } while (h < N);
    printf("Dibutuhkan %d hari, siput akan mencapai ketinggian %.2f meter\n",i/2,N);
    
    return 0;
}
