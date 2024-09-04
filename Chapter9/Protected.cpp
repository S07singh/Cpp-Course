#include<iostream>
using namespace std;

class Base{
    protected:
        int a; 
    private:
        int b;

};

class Derived: protected Base{
   
};

/* |visibility mode- |  public      |  private      |  protected  
   |                 |              |               |
   | member          |              |               |
   | private:        | not inherite |  not inherite |  not inherite
   | protected:      | protected    |  private      |  protected
   | public:         | public       |  private      |  protected
*/
int main(){
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}

