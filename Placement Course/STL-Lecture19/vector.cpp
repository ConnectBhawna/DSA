#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int> v;
    cout<<"Capacity ->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity ->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity ->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity ->"<<v.capacity()<<endl;
    cout<<"Size     ->"<<v.size()<<endl;

    cout<<"Elements at 2nd Index is :"<<v.at(2)<<endl;

    cout<<"Front element of vector ->"<<v.front()<<endl;
    cout<<"Last element of vector  ->"<<v.back()<<endl;

    cout<<"Before popping from the vector ->"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"After popping from the vector  ->"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    /*
    Capacity =  Number of memories assigned
    Size     = Numbers of elements in the vector
    */
    cout<<"Before clearing the vector size is  -> "<<v.size()<<endl;
    v.clear();
    cout<<"After clearing the vector size is   -> "<<v.size()<<endl;
    
    vector<int> a(5,1);
    vector<int> last(a);
    cout<<"Copy of Array '/a'  ->"<<endl;
    for(int i=0;i<last.size();i++){
        cout<<last[i]<<" ";
    }
}