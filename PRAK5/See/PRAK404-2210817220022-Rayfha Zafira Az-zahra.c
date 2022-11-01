#include <stdio.h>

void main(){
    int p;
    float a, b, hsl;

    while(p != 5){
        printf("Pilih program \n1. Penjumlahan \n2. Pengurangan \n3. Perkalian \n4. Pembagian \n5. Exit\n");
        printf("Masukkan Pilihan : "); scanf("%d", &p);
        if(p == 5){printf("Terimakasih, telah menggunakan kalkulator Rayfha Zafira Az-zahra\n\n");}
        else if(p < 0 || p > 5){printf("Input anda salah, silahkan coba lagi\n\n");}
        else{
            printf("Masukkan nilai pertama : "); scanf("%f", &a);
            printf("Masukkan nilai kedua   : "); scanf("%f", &b);
            if(p == 1){
            hsl = a + b;
            printf("Hasil Penjumlalahan antara %.2f dengan %.2f adalah %.2f\n\n", a, b, hsl);}
            else if(p == 2){
            hsl = a - b;
            printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", a ,b, hsl);}
            else if(p == 3){
            hsl = a * b;
            printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n\n", a ,b, hsl);}
            else {
            hsl = a / b;
            printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n\n", a ,b, hsl);}
        }
    }
}
