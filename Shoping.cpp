#include <iostream>
using namespace std;

class Product
{
    int productId;
    string productName;
    float price;

public:
    void getData()
    {
        cout << "Enter Product ID: ";
        cin >> productId;
        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, productName);

        cout << "Enter Price: ";
        cin >> price;
    }

    void display()
    {
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Product p;

    p.getData();
    p.display();

    return 0;
}