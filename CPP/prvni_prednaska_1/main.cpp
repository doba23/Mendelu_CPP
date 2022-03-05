#include <iostream>
using namespace std;

class Auto {
public:
    string barva;
    float objemMotoru;
    int rokVyroby;
};

int main() {
    Auto* mojeHonda;
    mojeHonda = new Auto;
    mojeHonda ->barva = "modra";
    delete (mojeHonda);
    return 0;
}