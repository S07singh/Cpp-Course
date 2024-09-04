#include<iostream>
using namespace std;

class Point{
    int x, y;
    public:
        // Point(){}
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }

};
int main(){
    Point p(1,2);
    // Point p;  //  Here constructor becomes data type
    // p = Point (1,2);   // for writing like this we have to create a default constructor.
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();
    return 0;
}
