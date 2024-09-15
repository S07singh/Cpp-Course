#include<iostream>
#include<fstream>
 // In order work with files in c++, you will have to open it.
 // Primarily, there are 2 ways to open a file
 // 1. Using the constructor
 // 2. Using the member function open() of the class 
using namespace std;

int main(){
    string st2;
    // Opening files using constructor and reading it
    ifstream in("sample60b.txt"); // Read operation
    in>>st2;
    getline(in, st2);  
    cout<<st2;

    return 0;
}
