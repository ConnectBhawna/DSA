#include<iostream>
#include<map>
using namespace std;

//Here all the operations take O(logn) time it's implementation 
//done with trees that's why
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

    m.erase(3);
    cout<<"Map after erase : "<<endl;
    for(auto i:m){
        cout<< i.first <<" "<<i.second <<endl;
    }cout<<endl;

    auto it = m.find(5);
    for(auto i = it;i<m.end();i++){
      cout<<(*i).first<<endl;
    }
  return 0;
}