/*
Program to convert Nepalese Currency (Rupees and Paisa) to US Currency (Dollar and Cents). (Rs. 98.51=1$)
*/
#include<iostream>
using namespace std;

class Rupees {
        int rupees, paisa;
        public:
            Rupees(int rs , int ps) {
                rupees = rs;
                paisa = ps;
            }

            int getRupaiya() {return rupees;}
            int getPaisa() {return paisa;}

            void show() {
                cout << "Rs." << rupees << "." << paisa;
            }
};

class Dollar {
    int dollar, cents;
    public:
        Dollar(){}
        Dollar(Rupees r) {
            float totalRupaiya = static_cast<float>(r.getRupaiya()+(r.getPaisa())/100);
            float totalDollar = (totalRupaiya/98.51);
            dollar = static_cast<int>(totalDollar);
            cents = static_cast<float>(totalDollar-dollar)*100;
        }

        void show() {
            cout << "$" << dollar << "." << cents;
        }
};

int main() {
    Rupees r(1000,0);
    Dollar d;
    d = r;
    r.show();
    cout << endl;
    d.show();
    return 0;
}