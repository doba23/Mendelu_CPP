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
    Brneni* m_neseneBrneni;
public:
    Rytir(int obrana){
        m_obrana = obrana;
        m_neseneBrneni = nullptr;
    }
    void seberBrneni (Brneni* brneni){
        m_neseneBrneni = brneni;
    }

    void zahodBrneni(){
        m_neseneBrneni = nullptr;
    }

    int getObrana(){
        if (m_neseneBrneni == nullptr){
            return m_obrana;
        }
        else {
            return m_obrana + m_neseneBrneni->getBonusObrany();
        }

    }
};

int main() {
    Brneni* helma = new Brneni(15);
    Rytir* jan = new Rytir(15);

    cout << "Rytir ma schopnost obrany:" << jan->getObrana() << endl;
    jan->seberBrneni(helma);
    cout << "Rytir ma schopnost obrany:" << jan->getObrana() << endl;
    jan->zahodBrneni();
    cout << "Rytir ma schopnost obrany:" << jan->getObrana() << endl;
    delete helma;
    delete jan;
    return 0;
}
