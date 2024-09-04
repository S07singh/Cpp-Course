#include <iostream>
using namespace std;
// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Derived class syntax
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//   class members/methods/etc....
// }
// Note:
// 1. Default visibility mode is private
// 2. Public visibility mode: Public member of the base class becomes public member of the derived class
// 2. Private visibility mode: Public member of the base class becomes private member of the derived class
// 4. Private member of the base class never inherited
// Creating a programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();

    return 0;
}