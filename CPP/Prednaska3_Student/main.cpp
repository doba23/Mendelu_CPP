#include <iostream>
using namespace std;

class Student{
    string m_jmeno;
    int m_semestr;
    float m_prumer;
    float m_vyplaceno_Stipendii;
public:
    Student (string jmeno,int semestr,float prumer){
        m_jmeno = jmeno;
        m_semestr = semestr;
        m_prumer = prumer;
        m_vyplaceno_Stipendii = 0.0;
}
    float aktualniStipendium(){
        float aktualniVyse= ((1000*m_prumer)+(m_semestr*100));
        return aktualniVyse;
    }

    void printSoucetStipendii(){
        cout << "Vyplaceno: " << m_vyplaceno_Stipendii << endl;
        cout << "Aktualni vyse stipendia: " << aktualniStipendium()  << endl;
    }

    void prictiStipedndia() {
        m_vyplaceno_Stipendii += aktualniStipendium();
    }

};

int main() {
    Student* dominik = new Student("Dominik", 2, 2.5);
    dominik->printSoucetStipendii();
    dominik->prictiStipedndia();
    dominik->printSoucetStipendii();
    return 0;
}
