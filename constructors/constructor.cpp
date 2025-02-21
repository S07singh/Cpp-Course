#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    // Creating a constructor
    // Constructor is a special member function with the same name as of the class.
    //  It is automatically invoked whenever an object is created
    // It is used to initialize the objcets of its class
    Complex(void); // constructor declaration
    void printNumber()
    {
        cout<< "Your number is " << a << " + " << b<<"i" << endl;
    }

};

Complex :: Complex(void)
{
    a=0;
    b=0;
}

int main(){

    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    
    return 0;
}

/*
Characteristics of Constructors

1. It should be declared in the public section of the class
2. They are automatically invoked whenever object is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address

*/