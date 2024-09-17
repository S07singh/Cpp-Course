#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    // Function Objects (Functor):- Function wrapped in a class so that it available like an object
    int arr[] = {1, 73, 4, 2, 54, 7};
    // sort(address of first element, address of last element);
    // sort(arr, arr+5);// this will sort for five element
    sort(arr, arr+6); // this will sort in ascending order  
    // sort(arr, arr+6, greater<int>()); // this will sort in descending order
    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}