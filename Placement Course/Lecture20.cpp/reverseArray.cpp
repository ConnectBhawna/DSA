#include<bits/stdc++.h>
using namespace std;

//If it is given from the correct index then you need to work like that
vector<int> reverseArray(vector<int> &arr, int m){
    int s = m+1;
    int e = arr.size()-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return arr;
}

vector<int> reverse(vector<int> v){
    int s = 0,e = v.size()- 1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(12);
    v.push_back(4);
    v.push_back(1);
    cout<<"Vector Without reverse -> ";
    print(v);
    vector<int> ans = reverseArray(v,2);
   // vector<int> ans = reverse(v);
    cout<<"Vector With reverse    -> ";
    print(ans);


    return 0;
}



