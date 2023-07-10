#include <iostream>
using namespace std;

class Student
{
    public:
    int rollno;
    string name;
    static int adminno;
    Student(string n)
    {
        adminno++;
        rollno=adminno;
        name=n;
    }
    static int getAddminNo()
    {return adminno;}
    void display()
    {
        cout<<"Name is "<<name<<" Roll NO is "<<rollno<<endl;
    }
};
int Student::adminno=0;
int main()
{
    Student s1("John");
    Student s2("Alex");
    Student s3("David");
    Student s4("Smith");
    Student s5("Nathan");
    Student s6("Chris");
    Student s7("Jason");
    Student s8("Jos");
    Student s9("Ben");
    Student s10("Urmila");
    Student s11("Harpreet");
    Student s12("Dilson");
    Student s13("Darry");
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    s6.display();
    s7.display();
    s8.display();
    s9.display();
    s10.display();
    s11.display();
    s12.display();
    s13.display();
    cout<<"Number of Admission "<<Student::adminno<<endl;

}
