#include <iostream>
#include <map>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    // constrcutor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertNode(Node* &tail, int element, int d) {
    //empty list
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list
        //here element is the node-data, after which we want to insert d
        Node* curr = tail;
        while(curr->data != element) {
            curr = curr -> next;
        }
        //element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}    

void print(Node* &tail) {

    Node* temp = tail;

    //empty list
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
} 

int main(){

    Node* tail = NULL;
    // print(tail);

    insertNode(tail, 1, 3);
    insertNode(tail, 3, 5);
    insertNode(tail, 5, 7);
    // print(tail);
    // cout << tail -> data << endl;



    return 0; 
}