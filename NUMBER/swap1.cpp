#include<iostream>
using namespace std;

void swap(int a, int b){
    int temp;
    temp = a;
    a=b;
    b=temp;

   cout<<"The value of a is "<<a<<endl;
   cout<<"The value of b is "<<b<<endl;


}
int main(){
    int x=10;
    int y =12;

    

    swap(x,y);

    cout<<"The value of x is "<<x<<"\n";
    cout<<"The value of y is "<<y<<endl;

    return 0;
}