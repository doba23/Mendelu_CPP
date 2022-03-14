#include <iostream>
using namespace std;
class Account {
private:
    string m_ownerName;
    float m_withdrawalLimit;
    float m_balance;
    string m_log;
    bool m_transparentAccount;


public:
    Account(const string ownerName, float withdrawalLimit, bool transparentAccount) {
        ownerName = m_ownerName;
        withdrawalLimit = m_withdrawalLimit;
        transparentAccount = m_transparentAccount;
    }
};



int main(){
    cout << "Hello, World!" << endl;
    return 0;
}
