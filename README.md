# Dokumentasi Kode Palindrome

## Deskripsi

Kode ini adalah program sederhana dalam C++ yang memeriksa apakah sebuah string adalah palindrom. Palindrom adalah kata, frasa, angka, atau urutan lainnya yang dibaca sama baik dari depan maupun dari belakang, tanpa memperhatikan spasi dan tanda baca.

### Struktur Kode

1. **Fungsi `isPalindrome`**
2. **Fungsi `isPalindrome2`** (opsional)
3. **Fungsi `main`**

## Kode Sumber

```cpp
#include <iostream>
using namespace std;

// Fungsi untuk memeriksa apakah sebuah string adalah palindrom
bool isPalindrome(const string& txt) {
    int left = 0;
    int right = txt.length() - 1;

    while (right > left) {
        if (txt[left++] != txt[right--]) {
            return false; // Jika karakter tidak sama, kembalikan false
        }
    }
    return true; // Jika semua karakter cocok, kembalikan true
}

// Fungsi kedua untuk memeriksa palindrom (opsional)
bool isPalindrome2(string txt) {
    string txtRev = txt; // Membuat salinan dari string asli
    reverse(txtRev.begin(), txtRev.end()); // Membalik string
    return (txtRev == txt) ? true : false; // Membandingkan dengan string asli
}

// Fungsi utama untuk menjalankan program
int main() {
    string kata;
    cout << "--Check kata--\n\n";
    cout << "Input kata : "; cin >> kata; // Meminta input dari pengguna
    cout << "Hasil : " << boolalpha << isPalindrome(kata) << endl; // Menampilkan hasil
}
