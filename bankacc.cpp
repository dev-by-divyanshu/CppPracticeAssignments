#include <iostream>
using namespace std;

class BankAccount
{
    int accountNumber;
    string customerName;
    float balance;

public:
    void getData()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        // cin.ignore();
        cout << "Enter Customer Name: ";
        // getline(cin, customerName);
        cin >> customerName;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void deposit()
    {
        float amount;
        cout << "Enter Deposit Amount: ";
        cin >> amount;
        balance = balance + amount;
    }

    void withdraw()
    {
        float amount;
        cout << "Enter Withdraw Amount: ";
        cin >> amount;

        if(amount <= balance)
            balance = balance - amount;
        else
            cout << "Insufficient Balance" << endl;
    }

    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.getData();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}