#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    int marks;

    void input()
    {
        cout << "Enter roll number and marks: " << endl;
        cin >> roll >> marks;
    }

    void display()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1, s2;

    s1.input();
    s2.input();

    s1.display();
    s2.display();

    if (s1.marks > s2.marks)
        cout << "Student 1 has higher marks" << endl;
    else if (s2.marks > s1.marks)
        cout << "Student 2 has higher marks" << endl;
    else
        cout << "Both have equal marks" << endl;

    return 0;
}