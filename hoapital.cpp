#include <iostream>
using namespace std;

class Hospital
{
    int patientId;
    string patientName;
    int age;
    string disease;

public:
    void getData()
    {
        cout << "Enter Patient ID: ";
        cin >> patientId;
        cin.ignore();

        cout << "Enter Patient Name: ";
        getline(cin, patientName);

        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter Disease: ";
        getline(cin, disease);
    }

    void display()
    {
        cout << "Patient ID: " << patientId << endl;
        cout << "Patient Name: " << patientName << endl;
        cout << "Age: " << age << endl;
        cout << "Disease: " << disease << endl;
    }
};

int main()
{
    Hospital h;

    h.getData();
    h.display();

    return 0;
}