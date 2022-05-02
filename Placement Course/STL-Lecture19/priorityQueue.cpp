#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //Max-Heap
    priority_queue<int> max;
    //Min Heap
    priority_queue<int,vector<int>,greater<int> > mini;
    max.push(1);
    max.push(3);
    max.push(2);
    max.push(0);

    cout<<"SIze -> "<<max.size()<<endl;
    int n  = max.size();
    for(int i = 0; i < n;i++){
        cout<<max.top()<<" ";
        max.pop();
    }cout<<endl;

    cout<<"Now doing for min Heap";
    mini.push(5);
    mini.push(0);
    mini.push(4);
    mini.push(1);
    mini.push(3);

    cout<<"SIze -> "<<mini.size()<<endl;
    int n2  = mini.size();
    for(int i = 0; i < n2;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;


    cout<<"Is the priority queue empty : "<<mini.empty()<<endl;




    

    return 0;
}