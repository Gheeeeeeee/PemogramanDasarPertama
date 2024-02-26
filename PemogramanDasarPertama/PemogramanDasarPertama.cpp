// PemogramanDasarPertama.cpp : This file contains the 'main' function. Program execution be
#include <iostream>
using namespace std;

int main()
{//begin
	//numeric nPanjang, nLebar, nLuas
	int nPanjang, nLebar, nLuas;
		//display 'Masukan Panjang= '
		cout << "masukan panjang = ";
	//accpet nPanjang
		cin >> nPanjang;
		//display 'Masukan Lebar = '
		cout << "masukan lebar = ";
	//accept lebar
	cin >> nLebar;
		//compute nluas = nPanjang * nLebar
		nLuas = nPanjang * nLebar;
	//display 'Luasnya adalah = ' + nLuas
		cout << "lebarnya adalah = " << nLuas << endl;

}//end