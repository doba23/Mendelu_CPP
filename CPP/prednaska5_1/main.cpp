#include <iostream>
using namespace std;

class Brneni {
    int m_bonusObrany;
public:
    Brneni(int bonus){
        m_bonusObrany = bonus;
    }
    int getBonusObrany(){
        return m_bonusObrany;
    }
};

class Rytir {
    int m_obrana;
    Brneni* m_neseneBrneni; // u bezneho zpusobi zde tato hodnota neni
public:
    Rytir(int obrana){
        m_obrana = obrana;
        m_neseneBrneni = nullptr; // u bezneho zpusobi zde tato hodnota neni
    }
    void seberBrneni (Brneni* brneni){
//        m_obrana += brneni->getBonusObrany(); // bezny zpusob
        m_neseneBrneni = brneni;
    }

    void zahodBrneni(){
        m_obrana = 0;
    }

    int getObrana(){
        if (m_neseneBrneni == nullptr){
            return m_obrana;
        }
        else {
            return m_obrana += m_neseneBrneni->getBonusObrany();
        }

    }
};

int main() {
    Brneni* helma = new Brneni(15);
    Rytir* jan = new Rytir(15);
    jan->seberBrneni(helma);
    cout << "Rytir ma schopnost obrany:" << jan->getObrana() << endl;
    delete helma;
    delete jan;
    return 0;
}
