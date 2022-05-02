#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Bhawna");
    s.push("Vidhi");
    s.push("Chauhan");

    cout<<"Top element : "<<s.top()<<endl;

    s.pop();
    cout<<"Top element after popping of element : "<<s.top()<<endl;

    cout<<"size of stack : "<<s.size()<<endl;

    cout<<"Empty stack or not : "<<s.empty()<<endl;



    return 0;
}