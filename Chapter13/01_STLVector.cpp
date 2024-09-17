#include<iostream>
#include<vector>
using namespace std;


/*
STL -> standard template libary = containers + Algorithm + Iterators
containers-> object which stores data
Algorithm-> procedure to process the data
Iterators -> object which point to an element of a containers

Containers
1. sequence container --> linear fashion-> vector,list, dequeue
2. Associative container --> direct access -> tree(set/multiset),(map/multimap)
3. Derived container --> Real world modeling -> stack, queue, priority-queue


 */

template <class T>
void display(vector<T> &v){
// void display(vector<int> &v){
    cout<<"Displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" "; // both are same
    }
    cout<<endl;
}
int main(){ 

    // vector<data_type> vector_name;
    // vector<int> vec1;      //zero length integer vector

    vector<int> vec1;
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);
    }

    display(vec1);   
    
    // vec1.pop_back();
    // display(vec1); 

    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter,566);
    // display(vec1);


    vector<char> vec2(4);  //4-element character vector
    // vec2.push_back('5');
    // display(vec2);
    
    vector<char> vec3(vec2);//4-element character vector from vec2
    display(vec3);
    vector<int> vec4(6,3); //6-element vector of 3s
    display(vec4);

    return 0;
}



