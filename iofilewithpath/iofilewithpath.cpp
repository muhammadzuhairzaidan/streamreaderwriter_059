#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukan Nama File : ";
	cin >> NamaFile;

	//membuka file dalam mode menulia.
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(NamaFile + "txt", ios::out);

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "-";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasuskkam q
		if (baris == "q") break;
		//menulia dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	//selesai dalam menulis sekarang tutup filenya
	outfile.close();

	//membuka file dalam dalam mode membaca
	ifstream infile;
	//menunjuk ke sebuah file
	infile.open(NamaFile, ios::in);

	cout << endl << ">= Membuka dan membacafile " << endl;
	//jika file ada maka
	if (infile.is_open())
	{
		//melakukan perulangan tiap baris
		while (getline(infile, baris))
		{
			//dan tampilkan di sini
			cout << baris << '\n';
		}
		//menutup file tersebut setelah selesai
		infile.close();
	}
	//jika tidak ditemukan file maka akan menampilkan ini
	else cout << "Unable to open file";
	return 0;
}
