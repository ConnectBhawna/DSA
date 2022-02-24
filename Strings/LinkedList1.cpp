/* printing the linked list in a iterative manner */
#include<bits/stdc++.h>
using namespace std;
class Node {
    int data;
    class Node * next;
    public:
          void print(int x);
}
class Node *head;
Node :: print(int head){
    if(head == NULL) {
        return ;
    }
    else{
        struct Node *temp =head;
        while(temp != NULL) {
            cout<<head->data<<endl;
            print(head->next);
        }
    }
}
int main(){

    Node n;
    n.insert(3);
    n.insert(4);
    n.print(1);
    return 0;

}