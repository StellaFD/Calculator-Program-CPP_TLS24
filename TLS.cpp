#include <stdio.h>      // Untuk fungsi input-output standar (printf, scanf)
#include <stdlib.h>     // Untuk fungsi exit dan lain-lain
#include <math.h>       // Untuk fungsi matematika (sin, cos, tan, log, sqrt, pow)
#include <string.h>     // Untuk manipulasi string (misalnya strcmp)
#include <ctype.h>      // Untuk fungsi karakter (tolower)

// Fungsi untuk menghitung penjumlahan
double tambah(double a, double b) {
    return a + b;
}

// Fungsi untuk menghitung pengurangan
double kurang(double a, double b) {
    return a - b;
}

// Fungsi untuk menghitung perkalian
double kali(double a, double b) {
    return a * b;
}

// Fungsi untuk menghitung pembagian
double bagi(double a, double b) {
    if (b == 0) {
        printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
        exit(1);
    }
    return a / b;
}

// Fungsi untuk menghitung pangkat
double pangkat(double base, double exp) {
    return pow(base, exp);
}

// Fungsi untuk menghitung akar kuadrat
double akar(double num) {
    if (num < 0) {
        printf("Error: Tidak dapat menghitung akar kuadrat dari bilangan negatif.\n");
        exit(1);
    }
    return sqrt(num);
}

// Fungsi untuk menghitung sinus
double hitung_sin(double x) {
    return sin(x);
}

// Fungsi untuk menghitung cosinus
double hitung_cos(double x) {
    return cos(x);
}

// Fungsi untuk menghitung logaritma
double hitung_log(double x) {
    if (x <= 0) {
        printf("Error: Logaritma hanya dapat dihitung untuk bilangan positif.\n");
        exit(1);
    }
    return log(x);
}

// Fungsi utama
int main() {
    double num1, num2;
    char operasi[10];
    char lanjut;

    do {
        // Menampilkan menu
        printf("Pilih operasi yang ingin dilakukan:\n");
        printf("Penjumlahan: +\nPengurangan: -\nPerkalian: *\nPembagian: /\nPangkat: ^\nAkar kuadrat: sqrt\nSinus: sin\nCosinus: cos\nLogaritma: log\n");
        printf("Masukkan operasi: ");
        scanf("%s", operasi);

        // Memeriksa jenis operasi dan meminta input yang sesuai
        if (strcmp(operasi, "sqrt") == 0 || strcmp(operasi, "sin") == 0 || strcmp(operasi, "cos") == 0 || strcmp(operasi, "log") == 0) {
            printf("Masukkan satu angka: ");
            scanf("%lf", &num1);
        } else {
            printf("Masukkan dua angka: ");
            scanf("%lf %lf", &num1, &num2);
        }

        // Melakukan perhitungan berdasarkan operasi yang dipilih
        if (strcmp(operasi, "+") == 0) {
            printf("Hasil: %.2lf\n", tambah(num1, num2));
        } else if (strcmp(operasi, "-") == 0) {
            printf("Hasil: %.2lf\n", kurang(num1, num2));
        } else if (strcmp(operasi, "*") == 0) {
            printf("Hasil: %.2lf\n", kali(num1, num2));
        } else if (strcmp(operasi, "/") == 0) {
            printf("Hasil: %.2lf\n", bagi(num1, num2));
        } else if (strcmp(operasi, "^") == 0) {
            printf("Hasil: %.2lf\n", pangkat(num1, num2));
        } else if (strcmp(operasi, "sqrt") == 0) {
            printf("Hasil: %.2lf\n", akar(num1));
        } else if (strcmp(operasi, "sin") == 0) {
            printf("Hasil: %.2lf\n", hitung_sin(num1));
        } else if (strcmp(operasi, "cos") == 0) {
            printf("Hasil: %.2lf\n", hitung_cos(num1));
        } else if (strcmp(operasi, "log") == 0) {
            printf("Hasil: %.2lf\n", hitung_log(num1));
        } else {
            printf("Operasi tidak valid.\n");
        }

        // Tanyakan kepada pengguna apakah ingin melanjutkan
        printf("Apakah Anda ingin melakukan perhitungan lain? (y/n): ");
        scanf(" %c", &lanjut);
        lanjut = tolower(lanjut);

    } while (lanjut == 'y');

    printf("Terima kasih telah menggunakan kalkulator!\n");
    return 0;
}