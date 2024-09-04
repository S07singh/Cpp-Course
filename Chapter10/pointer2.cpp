#include<iostream>
using namespace std;

int main(){
    
    float *p = new float(40.78);
    cout << "The address p is " << (p) << endl;
    cout << "The value at address p is " << *(p) << endl;
    
    return 0;
}
