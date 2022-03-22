#include <iostream>
using namespace std;

class Hrdina{
private:
    int m_sila;
    int m_obratnost;

public:

    Hrdina(){
        m_sila = 0;
        m_obratnost = 2;
    }

    int getSila(){
        return m_sila;
    }

    int getObratnost(){
        return m_obratnost;
    }

    void zvysUroven(){
        m_sila++;
        m_obratnost--;
    }

};


int main() {

    Hrdina* frodo = new Hrdina;
    frodo -> zvysUroven();
    cout << frodo -> getSila() << endl;
    cout << frodo -> getObratnost() << endl;
    frodo -> zvysUroven();
    cout << frodo -> getSila() << endl;
    cout << frodo -> getObratnost() << endl;
    frodo -> zvysUroven();
    cout << frodo -> getSila() << endl;
    cout << frodo -> getObratnost() << endl;
    delete frodo;
    return 0;

}
