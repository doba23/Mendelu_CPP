#include <iostream>
using namespace std;

class Auto{
  string m_SPZ;
  float m_pocetKm;
  string m_predchoziMajitel;

public:
    Auto (string SPZ, float pocetKm, string predchoziMajitel){
        m_SPZ = SPZ;
        m_pocetKm = pocetKm;
        m_predchoziMajitel = predchoziMajitel;
    }

    Auto (string SPZ){
        m_SPZ = SPZ;
        m_pocetKm = 0.0;
        m_predchoziMajitel = "";
    }

    Auto (float pocetKm){
        m_SPZ = "";
        m_pocetKm = pocetKm;
        m_predchoziMajitel = "";
    }

    Auto (string SPZ, float pocetKm){
        m_SPZ = SPZ;
        m_pocetKm = pocetKm;
        m_predchoziMajitel = "";
    }
    Auto (float pocetKm, string predchoziMajitel){
        m_SPZ = "";
        m_pocetKm = pocetKm;
        m_predchoziMajitel = predchoziMajitel;
    }

    Auto (string SPZ,  string predchoziMajitel){
        m_SPZ = SPZ;
        m_pocetKm = 0.0;
        m_predchoziMajitel = predchoziMajitel;
    }
    Auto (){
        m_SPZ = "";
        m_pocetKm = 0.0;
        m_predchoziMajitel = "";
    }

    void printInfo(){
        cout << "SPZ: " << m_SPZ << endl;
        cout << "Pocet najetych Km: " << m_pocetKm << endl;
        cout << "Predchozi majitel/ka: " << m_predchoziMajitel << endl;
    }

};

int main() {
    Auto* honda = new Auto("4AX","Tom");
    Auto* skoda = new Auto("5B3");
    Auto* ferrari = new Auto("AAA", 156.3, "Ital");
    Auto* bugatti = new Auto(5000.0);
    Auto* mazda = new Auto("8UA", 156321.0);
    Auto* volvo = new Auto(5000.0, "Anicka");
    Auto* dacia = new Auto( "596E","Salim");
    volvo->printInfo();

    delete honda;
    delete skoda;
    delete ferrari;
    delete bugatti;
    delete mazda;
    delete volvo;
    delete dacia;
    return 0;
}
