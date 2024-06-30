#include "KurCarpimINTERFACE.h"
#include "KurCarpimSERVICE.cpp"
#include <iostream>


using namespace std;

enum {
	EURO = 210,
	USD = 643,
	TR = 949,
};

void kullanicadanKurBilgisiAlma(int& secilenKur)
{
	int secim;
	cout << "Euro (1) Dolar (2) Turk Lirasi (3)" << endl;
	cin >> secim;
	secilenKur = (secim == 1) ? EURO : (secim == 2) ? USD : TR;
}

int main(void)
{
	int ilkKur, ikinciKur, secim, amount;
	string filePath = "-1";

	cout << "ilk kuru seciniz" << endl;
	kullanicadanKurBilgisiAlma(ilkKur);
	cout << "ikinci kuru seciniz" << endl;
	kullanicadanKurBilgisiAlma(ikinciKur);
	cout << "Miktar : ";
	cin >> amount;

	cout << "Merkez Bankasi(1),AnlikKur(2)" << endl;
	cin >> secim;
	filePath = (secim == 1) ? "Data/MerkezBankasi.txt" : "Data/AnlikKur.txt";

	KurCarpim KurCarpim;
	KurCarpim.KurIleMiktarCarpim(filePath, ilkKur, ikinciKur, amount);

}