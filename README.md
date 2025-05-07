# Program Valentine Sederhana (C)

Program konsol C sederhana dengan tema Valentine.

## Deskripsi

Aplikasi ini menampilkan menu dengan 3 pilihan:
1.  **Beli Coklat**: Simulasi membeli coklat dengan komentar berdasarkan jumlah.
2.  **Seberapa Besar Cintamu?**: Menampilkan pola karakter (bentuk V) berdasarkan angka yang dimasukkan.
3.  **Exit**: Keluar dari program.

Program ini menggunakan Bahasa Indonesia.

## Cara Menjalankan

1.  **Simpan**: Simpan kode sebagai file `.c`, contoh: `valentine.c`.
2.  **Kompilasi**: Gunakan compiler C (seperti GCC):
    ```bash
    gcc valentine.c -o valentine
    ```
3.  **Jalankan**:
    * Windows: `valentine.exe`
    * Linux/macOS: `./valentine`

# Catatan Penting #

* Menggunakan `system("cls")` yang cocok untuk Windows. Ganti dengan `system("clear")` jika Anda di Linux/macOS.
* Menggunakan `getch()`. Jika ada error saat kompilasi, coba tambahkan `#include <conio.h>` di awal kode.
