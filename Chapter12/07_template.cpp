#include<iostream>
using namespace std;

template <class T>

class Sudhir {

    public:
        T data ;
        Sudhir(T a) {
            data = a;
        }
        void display(); 
         
};

template <class T>
void Sudhir<T> :: display(){
         cout<<data;  
}


void func(int a){
    cout<<"I am first templatised func() "<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

template <class T>
void func1(T a){
    cout<<"I am templatised func() "<<a<<endl;
}



int main(){

    // Sudhir< float> s(5.7);
    // Sudhir< char> s('c');
    // Sudhir< int> s(5);
    // cout<<s.data<<endl;
    // s.display();

    func(4); // Exact match takes the highest priority 
    // func1(4);
    return 0;
}