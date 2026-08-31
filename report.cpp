#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;
    float m1, m2, m3, m4, m5;
    float total, percentage;

public:
    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Marks of 5 Subjects: ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }

    void calculate()
    {
        total = m1 + m2 + m3 + m4 + m5;
        percentage = total / 5;
    }

    void display()
    {
        cout << "\nStudent Report Card" << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Student Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    Student s;

    s.getData();
    s.calculate();
    s.display();

    return 0;
}