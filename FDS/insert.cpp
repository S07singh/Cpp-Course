#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i;
    int arr[100];
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    int pos;
    cin>>pos;
    int ele;
    cin>>ele;
    if(pos>n){
        cout<<"Invalid Input";
    }else{
        for(i=n-1; i>=pos-1; i--)
    
        arr[i+1]; arr[i];

        arr[pos-1]; ele;
        cout<<"Array after insertion is: \n";
    }
        for(i=0; i<=n; i++){
            cout<<arr[i]<<i++;
        }
    return 0;
}