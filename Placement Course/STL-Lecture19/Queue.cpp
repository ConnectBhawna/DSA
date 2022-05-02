#include<iostream>
#include<queue>
using namespace std;

//fIRST IN FIRST OUT CONCEPT AND IT TAKES COMPLEXITY OF O(1)
int main()
{
    queue<string> q;
    q.push("Bhawna");
    q.push("Vidhi");
    q.push("Chauhan");

    cout<<"Top element : "<<q.front()<<endl;

    q.pop();
    cout<<"Top element after popping of element : "<<q.front()<<endl;

    cout<<"Size of queue : "<<q.size()<<endl;

    cout<<"Empty queue or not : "<<q.empty()<<endl;

    return 0;
}