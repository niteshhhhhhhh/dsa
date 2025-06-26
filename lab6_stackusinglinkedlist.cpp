#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data = val ;
        next = NULL;
    }
};

void push(node* &head, int val){ // pass by refrence , original value of variable can be changed
    node* newnode = new node(val);
    
    newnode -> next = head;
    head = newnode; 
}

void pop (node* &head){
    if (head == NULL){
        cout<< "Stack is empty! Nothing to pop "<< endl ;
        return;
    }
    node* temp = head; 
    head = head-> next ; 
    delete temp ; 
}

void display(node* head){ // pass by value 
    node* temp = head;
    cout<< "stack(from top to bottom: )";
    while (temp!= NULL){
        cout<<"|"<<temp->data<<"|"<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* head = NULL;
    push(head, 30);
    display(head);
    push(head, 40);
    display(head);
    push(head, 50);
    display(head);
    
    pop (head);
    display(head);
    pop (head);
    display(head);
    pop (head);
    display(head);
    pop (head);
    display(head);
    return 0;
    
}
