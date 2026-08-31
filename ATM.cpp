#include <iostream>
using namespace std;

class ATM
{
    int accountNumber;
    string accountHolder;
    float balance;

public:
    void getData()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolder);

        cout << "Enter Available Balance: ";
        cin >> balance;
    }

    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Available Balance: " << balance << endl;
    }
};

int main()
{
    ATM a;

    a.getData();
    a.display();

    return 0;
}