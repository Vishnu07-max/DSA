#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;

    }


};
class List{
    Node* head;
    Node* tail;
public:
    List(){
        head=NULL;
        tail=NULL;

    }
    void push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=NULL;

        }else{
            newNode->next=head;
            head=newNode;

        }
    }
    void push_back(int bval){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;

        } else{
            tail->next=newNode;
            tail=newNode;

        }
    }
    void print_list(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"-> ";
            temp=temp->next;
            

        }

    }
    int searchitr(int key){
        Node* temp=head;
        int idx =0;
        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next
            idx++
        } 
        return -1
    }
    
        

    };
    int main(){
        list l1;
        l1.push_front(3);
        l1.push_front(5);
        l1.push_front(2);
        l1.push_front(1);
        l1.printlist();
        cout<<l1.searchItr(5)<<endl;

        return 0;
    }   


