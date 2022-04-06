#include <iostream>
using namespace std;


class Car {
    class Motor{
        int m_power;

    public:
        Motor (int power){
            m_power = power;
        }

        int getPower(){
            return m_power;
        }

    };

    string m_color;
    Motor* m_motor;

public:
    Car(string color, int motorPower){
        m_color = color;
        m_motor = new Motor(motorPower);
    }

    ~Car(){
        delete m_motor;
    }

    void printInfo(){
        cout << "Color: " << m_color << endl;
        cout << "Engine Power: " << m_motor->getPower() << endl;
    }



};


int main() {
    Car* hondaCivic = new Car ("marian blue", 120);
    hondaCivic->printInfo();
    delete hondaCivic;
    return 0;
}
