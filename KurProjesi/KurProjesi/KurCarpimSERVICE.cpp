#include "KurCarpimINTERFACE.h"
#include "DosyadanKurCekINTERFACE.h"
#include "DosyadanKurCekSERVICE.cpp"

class KurCarpim : public KurIleCarpimINTERFACE
{
public:
    void KurIleMiktarCarpim(string dosyaKonum, int ilkKur, int ikinciKur, int miktar) override
    {
        KurCek kurcek;
        int cikti;
        cikti = kurcek.dosyadanCek(dosyaKonum, ilkKur, ikinciKur) * miktar;

        cout << cikti;
    }
};
