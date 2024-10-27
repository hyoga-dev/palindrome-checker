
# Palindrome Checker

## Deskripsi

Program ini merupakan aplikasi sederhana dalam C++ yang berfungsi untuk memeriksa apakah suatu kata adalah palindrome. Palindrome adalah kata, frasa, angka, atau urutan karakter lain yang dibaca sama dari depan maupun belakang (misalnya, "radar" atau "level").

Program ini memiliki dua metode untuk memeriksa palindrome:

### Metode : `isPalindrome`

- **Parameter**: `const string& txt`

  Menggunakan referensi ke string (`const string&`) untuk menghindari salinan yang tidak perlu, sehingga meningkatkan efisiensi memori dan kecepatan eksekusi.

- **Proses**:
  1. Menggunakan dua indeks (`left` dan `right`) untuk membandingkan karakter dari kedua sisi string.
  2. Jika karakter di posisi `left` dan `right` tidak sama, fungsi mengembalikan `false`.
  3. Jika semua karakter cocok, fungsi mengembalikan `true`.

## Kode

```cpp
#include <iostream>
using namespace std;

bool isPalindrome(const string& txt) {
	int left = 0;
	int right = txt.length() - 1;
	while (left < right) {
		if (txt[left++] != txt[right--]) return false;
	}
	return true;
}

int main() {
	string kata;
	cout << "--Check kata--\n\n";
	cout << "Input kata : "; cin >> kata;
	cout << "Hasil : " << boolalpha << isPalindrome(kata) << endl;
}
```

## Hasil eksekusi
![Gambar Contoh](hasilEksekusi.jpg)


