#include<iostream>
#include<set>
using namespace std;

//All the elements in set are present only Once
//There is no modification.It either deleted or added.
//Elements are returned in sorted order,when you start taking out the elements,It will come in sorted order 
//Here all the elements is of O(logn) size
int main(){

    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    for(int i : s){
        cout<<i<<" ";
    }
    cout<<endl<<"After adding the elements in set again : "<<endl;
    s.insert(5); //COMPLEXITY OF INSERT OPERATION IS O(logn)
    s.insert(1);
    s.insert(6);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(5);
    s.insert(1);
    s.insert(6);

    for(int i : s){
        cout<<i<<" ";
    }
    cout<<endl;
    s.erase(s.begin());
    for(int i : s){
        cout<<i<<" ";
    }

    cout<<"\n5 is present or not? : " <<s.count(5)<<endl;

    set<int>::iterator itr = s.find(5);

    cout<<"Here it present or not :"<<*itr<<endl;
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;


}