#include <iostream>
#define USD_TO_NPR_RATE 101.36
using namespace std;

class NPR;

class USD
{
    float usd;

public:
    USD() : usd(0) {}
    USD(float amt)  {
        usd = amt;
    }

    void getUSD()
    {
        cout << "Add currency in $ (USD) : ";
        cin >> usd;
    }

    float getAmount() { return usd; }
    float toNPR() { return usd * USD_TO_NPR_RATE; }

    friend bool operator>(USD &U, NPR &N);
    friend bool operator<(USD &U, NPR &N);
    friend bool operator==(USD &U, NPR &N);
    friend bool operator!=(USD &U, NPR &N);
    friend bool operator>=(USD &U, NPR &N);
    friend bool operator<=(USD &U, NPR &N);
};

class NPR
{
    float npr;

public:
    NPR() : npr(0) {}
    NPR(float amt) : npr(amt) {}

    void getNPR()
    {
        cout << "Add currency in Rs. (NPR) : ";
        cin >> npr;
    }

    float getAmount() { return npr; }

    friend bool operator>(USD &U, NPR &N);
    friend bool operator<(USD &U, NPR &N);
    friend bool operator==(USD &U, NPR &N);
    friend bool operator!=(USD &U, NPR &N);
    friend bool operator>=(USD &U, NPR &N);
    friend bool operator<=(USD &U, NPR &N);
};

bool operator>(USD &U, NPR &N)
{
    return U.toNPR() > N.getAmount();
}
bool operator>=(USD &U, NPR &N)
{
    return U.toNPR() >= N.getAmount();
}

bool operator<(USD &U, NPR &N)
{
    return U.toNPR() < N.getAmount();
}
bool operator<=(USD &U, NPR &N)
{
    return U.toNPR() < N.getAmount();
}

bool operator==(USD &U, NPR &N)
{
    return U.toNPR() == N.getAmount();
}

bool operator!=(USD &U, NPR &N)
{
    return U.toNPR() != N.getAmount();
}

int main()
{
    USD U;
    NPR N;
    
    U.getUSD();
    N.getNPR();

    cout << "USD > NPR " << (U > N) << endl;
    cout << "USD >= NPR " << (U >= N) << endl;
    cout << "USD < NPR " << (U < N) << endl;
    cout << "USD <= NPR " << (U <= N) << endl;
    cout << "USD = NPR " << (U == N) << endl;
    cout << "USD != NPR " << (U != N) << endl;
    return 0;
}
