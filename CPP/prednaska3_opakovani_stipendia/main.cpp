#include <iostream>

using namespace std;

class Student{
    string m_jmeno;
    int m_semestr;
    float m_prumer;
    int m_vyplacenaStipendia;

public:
    Student(string jmeno, int semestr, float prumer){
        m_jmeno = jmeno;
        m_semestr = semestr;
        m_prumer = prumer;
        m_vyplacenaStipendia = 0;

    }

    void printVyplacenaStipendia(){
        cout << "Student ma vyplacena stipendia: " << m_vyplacenaStipendia << endl;

    }

    void printAktualniStipendium(){
        cout << "Student ma vyplacena stipendia: " << (1000*m_prumer)+(m_semestr*100) << endl;
    }

    void prictiAktualniStipendium(){
        m_vyplacenaStipendia += (1000*m_prumer)+(m_semestr*100);
    }
};

int main() {
    Student* jirka = new Student("JiriBalas", 3, 3.121);
    jirka->printAktualniStipendium();
    jirka->printVyplacenaStipendia();
    jirka->prictiAktualniStipendium();
    jirka->printVyplacenaStipendia();
    delete jirka;
    return 0;
}
