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

    //destructor
    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
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

void deleteNode(Node* &tail, int element) {
    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty
        //assuming that given "element" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;
        while(curr -> data != element) {
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }
        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
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

    deleteNode(tail, 5);
    print(tail);
    cout << tail -> data << endl;



    return 0; 
}