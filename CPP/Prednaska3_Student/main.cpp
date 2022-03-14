#include <iostream>

class Student(){
    string m_jmeno;
    int m_semestr;
    float m_prumer;
    float m_soucetStipendii;
public:
    Student (string jmeno,int semestr,float prumer){
        m_jmeno = jmeno;
        m_semestr = semestr;
        m_prumer = prumer;
        m_soucetStipendii = 0.0;
}

    float aktualniStipendium(){
        return ((1000*m_prumer)+(m_semestr*100));
    }
    float getSoucetStipendii(){
        return m_soucetStipendii;
    }
    void setAddSoucetStipedndii(){
        m_soucetStipendii += aktualniStipendium;
    }
    int getAktualniStipendium(){
        return aktualniStipendium();
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
