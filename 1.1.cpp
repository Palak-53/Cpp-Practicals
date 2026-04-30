#include <iostream>
using namespace std;

class Wallet {

    int walletID;
    string userName;
    float balance;  

public:
    wallet(){};
    Wallet(int id, string name) {
        walletID = id;
        userName = name;
        balance = 0;
    }


    void loadMoney(float amount) {
        balance = balance + amount;
    }

    
    void transferMoney(Wallet &w, float amount) {
        if (amount <= balance) {
            balance = balance - amount;
            w.balance = w.balance + amount;
        } else {
            cout << "Error: Insufficient balance." << endl;
        }
    }

    
    void showDetails() {
        cout << "\nWallet ID: " << walletID;
        cout << "\nUser Name: " << userName;
        cout << "\nBalance: " << balance << endl;
    }
};

int main() {
    Wallet w1(1, "XYZ");
    Wallet w2(2, "ABC");

    w1.loadMoney(10000);
    w2.loadMoney(3000);
    w1.transferMoney(w2, 4000);

    w1.showDetails();
    w2.showDetails();

    return 0;
}
