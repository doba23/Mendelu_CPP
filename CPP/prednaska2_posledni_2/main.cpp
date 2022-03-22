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


};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
