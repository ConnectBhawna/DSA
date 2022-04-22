#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[3] = {1,2,3};
    array<int,4> a = {1,2,3,4};
    int size = a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Elements at 2nd Index: "<<a.at(2)<<endl;
    cout<<"Empty or Not: "<<a.empty()<<endl;

    cout<<"Front element of array: "<<a.front()<<endl;
    cout<<"Last element of array: "<<a.back()<<endl;

}