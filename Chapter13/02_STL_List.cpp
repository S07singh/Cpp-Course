#include<iostream>
#include<list>
 
using namespace std;
 
void display(list<int> &lst){

    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}
 
int main(){
    
    list<int> list1;  //empty list of 0 length
 
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    
    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    // iter++; // instead of this we can use display function.
    display(list1);
    // Removing elements from the list
    // list1.pop_back();
    // list1.remove(9);
    // display(list1);
    // list1.pop_front();
    // display(list1);

    // Sorting the list
    // list1.sort();
    display(list1);

    list<int> list2(3);  //empty list of length 3
    list<int> :: iterator it = list2.begin();
    *it = 45;
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;
 
    // display(list2);
    // list1.merge(list2);
    // cout<<"List 1 after merging: ";
    // display(list1); //List 1 after merging: 5 7 1 9 12 45 6 9 


    // display(list2);
    // list1.merge(list2);
    //list1.sort();
    // cout<<"List 1 after merging and list1 sort: ";
    // display(list1); // List 1 after merging and list1 sort: 1 5 7 9 12 45 6 9 
 

    // display(list2);
    // list1.sort();
    // list2.sort();
    // list1.merge(list2);
    // cout<<"List 1 after merging and list1 and list2 both are sorted: ";
    // display(list1); // List 1 after merging and list1 and list2 both are sorted: 1 5 6 7 9 9 12 45


    // Reversing the list
    list1.reverse();
    display(list1); // 12 9 1 7 5
    return 0;
}
