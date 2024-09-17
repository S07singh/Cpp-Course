#include<iostream>
#include<map>
#include<string>
using namespace std;


// Map is an associative array
int main(){

    // map <data_type_of_key,   data_type_of_value>  variable_name;

    map<string, int> marksMap;
    marksMap["Sudhir"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;

    marksMap.insert( { {"Rohan", 89}, {"Akshat", 46} } );
    map<string, int> :: iterator iter;
    for (iter = marksMap.begin();iter != marksMap.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"The size is: " <<marksMap.size()<<endl;
    cout<<"The max size is: " <<marksMap.max_size()<<endl;
    cout<<"The empty's return value is: " <<marksMap.empty()<<endl;
    
    
    return 0;
}