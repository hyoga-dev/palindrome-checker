#include <iostream>
using namespace std;

void main() {
	string txt;
	cout << "---Check kata---\n\n";
	cout << "Input kata : "; cin >> txt;

	string txtRev = txt;
	reverse(txtRev.begin(), txtRev.end()); 

	cout << "Hasil : " << boolalpha << (txtRev == txt) ? true : false;
}
