#include <stdio.h>

int main() {
    int tinggi;
    printf("Masukkan tinggi piramida: ");
    scanf("%d", &tinggi);

    if (tinggi < 1 || tinggi > 8) {
        printf("Tinggi piramida harus antara 1 dan 8.\n");
        return 1;
    }

    for (int i = 1; i <= tinggi; i++) {
        // Membuat spasi untuk menyusun piramida di sebelah kiri
        for (int j = 1; j <= tinggi - i; j++) {
            printf(" ");
        }

        // Membuat karakter '#' untuk piramida bagian kiri
        for (int k = 1; k <= i; k++) {
            printf("#");
        }

        // Membuat spasi antara dua piramida
        printf("  ");

        // Membuat karakter '#' untuk piramida bagian kanan
        for (int l = 1; l <= i; l++) {
            printf("#");
        }

        // Pindah ke baris berikutnya
        printf("\n");
    }

    return 0;
}
