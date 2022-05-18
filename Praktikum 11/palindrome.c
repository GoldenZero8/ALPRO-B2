/*Nama File 	: Palindrome*/
/*Deskripsi 	: Mesin abstrak untuk memeriksa apakah kata itu PALINDROM dan mengirimkan sebuah harga boolean*/
/*Nama - NIM   	: Arya Dheffan S - 24060121140160*/
/*Tgl Pembuatan	: Selasa, 17 Mei 2022*/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include "mesinint.c"
#include "mesinkar.c"

int main(){
    //Kamus
    char str[100];
    int i, len, temp = 0;
    bool isPalindrome = true;

    //Algoritma
    len = HitungChar();
    printf("===Mesin Palindrome===\n");

    if (len > 100)
    {
        printf("\nkarakter dalam pita maksimal 100 termasuk titik \n");
    }
    else{
        START();
        i = 0;
        while(!EOP()){
            str[i] = CC;
            ADV();
            i++;
        }

        printf("\nPita dibaca = ");
        for ( i = 0; i < len; i++){
            printf("%c", str[i]);
        }

        for(i=0; i<len; i++){
            if(str[i] != str[len-i-1]){
                isPalindrome = false;
            }
        }

        if(isPalindrome){
            printf("\nKata tersebut PALINDROM\n");
        }
        else{
            printf("\nKata tersebut BUKAN PALINDROM\n");
        }
    }

    getch();
    return 0;
}
