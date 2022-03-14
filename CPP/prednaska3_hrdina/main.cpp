#include <iostream>

using namespace std;

class Hrdina {

    int m_sila;
    int m_obratnost;
public:
    Hrdina (int silaAObratnost){
        m_sila = silaAObratnost;
        m_obratnost = silaAObratnost;
    }
    int getSila(){
        return m_sila;
    }

    int getObratnost(){
         return m_obratnost;
    }

    void zvysUroven(){
        m_sila = m_sila +1;
        m_obratnost -= 1;
    }
};


int main() {
    Hrdina*Frodo = new Hrdina(10);
//    cout << "Sila" << Frodo->m_sila << endl;
    cout << "Sila" << Frodo->getSila() << endl;
    delete Frodo;
    return 0;
}
