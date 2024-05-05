// 1. 
// 2. 
// 3.
// 4.
// 5. 
// 6. 

#include <iostream>
#include <string>
using namespace std;

struct DetailAlamat {
	string provinsi;
};
struct Kota {
	string nama;
	DetailAlamat kota;
	int indekskual;
	int nilSensor;
};

void input()
{

}
int main()
{
	Kota kot[5];
	for (int i = 0; i < 5; i++) {
		cout << "data ke-" << (i + 1) << ":" << endl;
		cout << "Nama Kota : ";
		getline(cin, kot[i].nama);

		cout << "Provinsi : ";
		cin >> kot[i].kota.provinsi;
		cout << "Rata-rata indeks kualitas : ";
		cin >> kot[i].indekskual;
		cout << "Rata-rata nilai salah satu sensor : ";
		cin >> kot[1].nilSensor;
		cout << endl;
	}
	for (int i = 0; i < 5; i++) {
		cout << endl;
		cout << "Data Kota ke-" << (i + 1) << ":" << endl;
		cout << "\n Nama Kota : " << kot[i].nama;
		cout << "\n Provinsi : " << kot[i].kota.provinsi;
		cout << "\n indeks kualitas : " << kot[i].indekskual;
		cout << "\n nilai sensor : " << kot[i].nilSensor;
		cout << endl;
	}
}

void display()
{

}
