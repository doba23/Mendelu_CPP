#include <iostream>
#include <array>
using namespace std;

class Auto {
    array<float, 4> m_tlakPneumatik;
public:
    Auto(array<float, 4> tlakPneumatik){
        m_tlakPneumatik = tlakPneumatik;
    }

    void setTlakPneumatik(int jakaPneumatika, float tlak){
        m_tlakPneumatik.at(jakaPneumatika) = tlak;
    }

    float getTlakPneumatik(int jakaPneumatika){
        return m_tlakPneumatik.at(jakaPneumatika);
    }
};

int main() {

    Auto* honda = new Auto({4.3,4.2,4.1,4.4});
    honda->setTlakPneumatik(0, 4.5);
    cout << "Tlak: " << honda->getTlakPneumatik(0) << endl;;


    array<int, 5> myArray = {50,10,20,30,40};
    cout << "velikost: " << myArray.size() << endl;
    cout << "hodnoty arraye: " << myArray.at(0) << endl;

    return 0;
}
