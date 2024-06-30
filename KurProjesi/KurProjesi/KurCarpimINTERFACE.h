#ifndef KURCARPIMINTERFACE_H
#define KURCARPIMINTERFACE_H

#include <string>
using namespace std;

class KurIleCarpimINTERFACE
{
protected:
    string dosyaKonum;
    int ilkKur;
    int ikinciKur;
    int miktar;

public:
    virtual void KurIleMiktarCarpim(string dosyaKonum, int ilkKur, int ikinciKur, int miktar) = 0;
};

#endif
