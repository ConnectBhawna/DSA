#include<iostream>
#include<map>
using namespace std;
int main(){

    map<int,string> m;
    m[1] = "bhawna";
    m[2] = "Chauhan";
    m[3] = "Vidhi";

    m.insert({5,"Bhumi"}); //Another method of saving

    cout<<"Before Erase from the map : "<<endl;
    for(auto i:m){
        cout<< i.first <<" "<<i.second <<endl;
    }cout<<endl;

    cout<<"Finding 5 : "<<m.count(5)<<endl;
    cout<<"Finding -5 : "<<m.count(-5)<<endl;
  return 0;
}