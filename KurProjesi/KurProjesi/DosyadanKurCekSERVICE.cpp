#include "DosyadanKurCekINTERFACE.h"
#include <fstream>
#include <sstream>

class KurCek : public DosyadanKurCekINTERFACE
{
public:
    virtual int dosyadanCek(string& dosyaYolu, int number1, int number2) override
    {
        ifstream ptr(dosyaYolu);

        if (ptr.is_open() == 0)
        {
            cout << "Dosya acilamadi";
            return 0;
        }
        else
        {
            string satir;

            while (getline(ptr, satir))
            {
                string ilkSutun, ikinciSutun, amount;
                istringstream iss(satir);
                iss >> ilkSutun >> ikinciSutun >> amount;

                if (stoi(ilkSutun) == number1 && stoi(ikinciSutun) == number2)
                {
                    this->kur = stoi(amount);
                    return kur;
                }
            }

            return 0;
        }
    }
};