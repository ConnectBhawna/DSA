#include<iostream>
#include<deque>
using namespace std;
int main(){

    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);
    d.push_back(7);

    cout<<"Deque before removing the element ->"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }

    d.pop_back();
    cout<<endl;
    cout<<"Deque after removing the element(end)->"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    d.push_back(7);
    d.pop_front();
    cout<<endl;
    cout<<"Deque after removing all element(start) ->"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Deque first element is -> "<<d.at(0)<<endl;
    cout<<"Deque front element is -> "<<d.front()<<endl;
    cout<<"Deque last element is  -> "<<d.back()<<endl;
    cout<<"Deque is empty or not  -> "<<d.empty()<<endl;


    cout<<"Size Before Erase -> "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"Size After Erase  -> "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }

    return 0;
    
}