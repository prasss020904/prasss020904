#include <stdio.h>

int main() {
    float harga, diskon, pembayaran;
    
    //input
    printf("Masukan harga barang: ");
    scanf("%f", &harga);

    printf("Masukan harga diskon dalam persen: ");
    scanf("%f", &diskon);

    //proses
    float jumlahDiskon = (diskon/100)*harga;
    float hargaSetelahDiskon = harga - jumlahDiskon;

    //output
    printf("Harga sebelum diskon: %.2f/n", harga);
    printf("jumlah diskon: %2.f/n", jumlahDiskon);
    printf("Jumlah pembayaran: %2.f/n", hargaSetelahDiskon);

    return 0;

}