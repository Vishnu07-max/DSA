#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;

    }
};
class List{
public:
    Node* head;
    Node* tail;
    List(){
        head = NULL;
        tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(tail == NULL){
            head = tail =newNode;

        }else{
            newNode->next = head;
            head = newNode;

        }
    }
    void pop_front(){
        if(head == NULL){
            return;
        }
        Node* temp =head;
        head = head->next;
        temp->next=NULL;
        delete temp;

    }
};
void printList(Node* head){
    Node* temp=head;
    while (temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
    
        /* code */
}
bool isCycle(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast != NULL && fast->next != NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow == fast){
            cout<<"cycle exists\n";
            return true;
        }
    }
    cout<<"cycle doesnt exist\n";
    return false;
}
int main(){

    List l1;
    l1.push_front(4);
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    l1.tail->next = l1.head;
    isCycle(l1.head);
}
    
