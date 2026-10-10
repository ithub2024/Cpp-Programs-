# include<iostream>
using namespace std;
class Node{ // Proper Node Creation Code.
    public:

    int val;
    Node *next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }    
};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next = &b;
    b.next = &c;
    c.next = &d;

    //cout<<(a.next)->val;  // print value by value 

    //Using Loop 
    Node temp = a;
    while (1)
    {
        cout<<temp.val<<" ";
        if(temp.next == NULL ) break;
        temp =*(temp.next);
    }

}
