#include<iostream>
using namespace std;

void print1(int n){
        for ( int i=1; i <=n; i++)
    {
        for(int j=0; j<2*n-1; j++){
            if(j<n-i || j>i+3){
                cout<<" ";
            }
            else
            cout<<"*" ;
        }
        cout<<endl;
    }
}
void print2(int n){
        for ( int i =0; i < n; i++)
    {   int j;
        for( j=0; j<n-i-1; j++){
              cout<<" ";
        }
        for( j=0; j<2*i+1; j++){  
            cout<<"*" ;
        }
        // for( j=0; j<n-i-1; j++){
        //     cout<< " ";
        // }
        cout<<endl;
    }
}



int main(){
    int n;
    cin>>n;
    print1(n);  
    return 0;
}