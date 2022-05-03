#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout<<"Finding 3 in the vector -> "
    <<binary_search(v.begin(),v.end(),3)
    <<endl;

    cout<<"Lower bound in the vector -> "
    <<lower_bound(v.begin(),v.end(),4)-v.begin()
    <<endl;

    cout<<"Upper bound in the vector -> "
    <<upper_bound(v.begin(),v.end(),4)-v.begin()
    <<endl;

    int a = 2;
    int b = 3;
    cout<<"Max of a & b -> "<<max(a,b)<<endl;

    cout<<"Min of a & b -> "<<min(a,b)<<endl;

    cout<<"a & b before swapping -> "<<a<<","<<b<<endl;

    swap(a,b);
    cout<<"a & b after swapping  -> "<<a<<","<<b<<endl;

    string str = "abcde";
    cout<<"String before reversing  -> "<<str<<endl;
    reverse(str.begin(),str.end());
    cout<<"String after  reversing  -> "<<str<<endl;

    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"Vector after reversing  -> ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"\nElements after sorting -> ";
    //This function is based on intro sort i.e, mixing of three 
    //sorting techniques like merge,quick and insertion
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }







    return 0;
}