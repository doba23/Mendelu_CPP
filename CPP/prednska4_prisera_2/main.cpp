#include <iostream>
using namespace std;

class Prisera{
    int m_sila;
    int m_zivoty;
public:
    Prisera(int sila){
        m_sila = sila;
        m_zivoty = 100;
    }
    int getSilaUtoku(){
        return m_sila;
    }
    int getPocetZivotu(){
        return m_zivoty;
    }
    void priseraJeNapadena(int silaProtivnika){
        m_zivoty -= silaProtivnika;
    }

    void priseraJeNapadena2(Prisera* prisera){
        m_zivoty -= prisera->getSilaUtoku();
    }
};
int main() {

    Prisera* alfons = new Prisera(60);
    Prisera* donio = new Prisera(60);
    cout << "Sila alfonse: " << alfons->getSilaUtoku() << endl;
    cout << "Zdravi alfonse: " << alfons->getPocetZivotu() << endl;
    cout << "Sila donia: " << donio->getSilaUtoku() << endl;
    cout << "Zdravi donia: " << donio->getPocetZivotu() << endl;

    cout << "Utok alfonse na donia." << endl;
//    donio->priseraJeNapadena(alfons->getSilaUtoku());
    donio->priseraJeNapadena2(alfons);
    cout << "Sila alfonse: " << alfons->getSilaUtoku() << endl;
    cout << "Zdravi alfonse: " << alfons->getPocetZivotu() << endl;
    cout << "Sila donia: " << donio->getSilaUtoku() << endl;
    cout << "Zdravi donia: " << donio->getPocetZivotu() << endl;

    delete alfons;
    delete donio;
    return 0;
}
