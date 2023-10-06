#include <stdio.h>
#include <string.h>

// membuat struct untuk menyimpan data user
typedef struct User {
    char username[20];
    char password[20];
} user;

// membuat fungsi untuk memeriksa apakah username dan password valid
int check_login(user u, char *username, char *password) {
    // membandingkan username dan password dengan data user
    if (strcmp(u.username, username) == 0 && strcmp(u.password, password) == 0) {
        return 1; // mengembalikan 1 jika valid
    } else {
        return 0; // mengembalikan 0 jika tidak valid
    }
}

int main() {
    // membuat variabel untuk menyimpan input user
    char username[20];
    char password[20];

    // membuat data user dengan struct
    user u;
    strcpy(u.username, "admin");
    strcpy(u.password, "1234");

    // menampilkan pesan selamat datang
    printf("Selamat datang di sistem login sederhana\n");

    // meminta input username dan password dari user
    printf("Masukkan username: ");
    scanf("%s", username);
    printf("Masukkan password: ");
    scanf("%s", password);

    // memeriksa apakah input user valid dengan fungsi check_login
    if (check_login(u, username, password)) {
        printf("Login berhasil!\n"); // menampilkan pesan jika login berhasil
    } else {
        printf("Login gagal!\n"); // menampilkan pesan jika login gagal
    }
}

