#include <iostream>
#include <array>
using namespace std;

class NoveAuto{
    class Pneumatika{
        float m_tlak;
    public:
        Pneumatika(float tlak){
            m_tlak = tlak;
        }
        void setTlak(float tlak){
            m_tlak = tlak;
        }
        float getTlak(){
            return m_tlak;
        }
    };

    array<Pneumatika*, 4> m_pneumatiky;

public:
    NoveAuto(array<float, 4> tlakPneumatik){
        m_pneumatiky.at(0) = new Pneumatika(tlakPneumatik.at(0));
        m_pneumatiky.at(1) = new Pneumatika(tlakPneumatik.at(1));
        m_pneumatiky.at(2) = new Pneumatika(tlakPneumatik.at(2));
        m_pneumatiky.at(3) = new Pneumatika(tlakPneumatik.at(3));
    }

    ~NoveAuto(){
        delete m_pneumatiky.at(0);
        delete m_pneumatiky.at(1);
        delete m_pneumatiky.at(2);
        delete m_pneumatiky.at(3);
    }

    void setTlakPneumatik(int jakaPneumatika, float tlak){
        m_pneumatiky.at(jakaPneumatika)->setTlak(tlak);
    }

    float getTlakPneumatik(int jakaPneumatika) {
        return m_pneumatiky.at(jakaPneumatika)->getTlak();
    }
};


int main() {
    NoveAuto* honda = new NoveAuto({4.3,4.2,4.1,4.4});
    cout << "Tlak: " << honda->getTlakPneumatik(0) << endl;
    honda->setTlakPneumatik(0, 4.5);
    cout << "Tlak: " << honda->getTlakPneumatik(0) << endl;

    delete honda;
    return 0;
}