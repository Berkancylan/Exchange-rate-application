#ifndef KURCEKINTERFACE_H
#define KURCEKINTERFACE_H

#include <iostream>
using namespace std;

class DosyadanKurCekINTERFACE
{
protected:
    int kur;
public:
    virtual int dosyadanCek(string& dosyaYolu, int number1, int number2) = 0;
};

#endif
