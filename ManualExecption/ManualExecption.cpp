#include <iostream>
using namespace std;

int main() {
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		throw 0.5; //melemparkan sebuah integer maka
		cout << "Pernyataan tidak akan deksekusi" << endl;
	}
	catch (int a) {
		//blok akan dieksekusi
		cout << "Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		/*jika selain integer maka blok ini akan dieksekusi*/
		cout << "default Pengecualian dieksekusi" << endl;
		return 0;
	}
}

