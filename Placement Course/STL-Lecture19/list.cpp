#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.push_back(7);

    for(int i:l){
        cout<<i<<" ";
    }

    cout<<endl;
    l.erase(l.begin());
    cout<<"After Erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    //cout<<"Delete from front"<<l.pop_front(1)<<endl;
    //cout<<"Delete from back"<<l.pop_back(2)<<endl;

    cout<<"Size of list is: "<<l.size()<<endl;

    cout<<"Copy of above list into another one"<<endl;
    list<int> n[l];
    for(int i:n){
        cout<<i<<" ";
    }
    
    return 0;
    //Today not well do from tomorrow onwards
}