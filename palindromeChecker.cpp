#include <iostream>
using namespace std;

bool isPalindrome(const string& txt) {
	int left = 0;
	int right = txt.length() - 1;
	while (right > left) {
		if (txt[left++] != txt[right--]) return false;
	}
	return true;
}

bool isPalindrome2(string txt) {
	string txtRev = txt;
	reverse(txtRev.begin(), txtRev.end());
	return (txtRev == txt) ? true : false;
}

int main() {
	string kata;
	cout << "--Check kata--\n\n";
	cout << "Input kata : "; cin >> kata;
	cout << "Hasil : " << boolalpha << isPalindrome(kata) << endl;
}
