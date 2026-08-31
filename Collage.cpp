#include <iostream>
using namespace std;

class Admission
{
    int rollNo;
    string name;
    string course;

public:
    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Course: ";
        getline(cin, course);
    }

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Student Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};

int main()
{
    Admission a;

    a.getData();
    a.display();

    return 0;
}