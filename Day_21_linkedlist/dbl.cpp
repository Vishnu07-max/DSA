#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data = val;
        prev =next = NULL;
        
    }
};
class doublylist {
    public:
    Node* head;
    Node* tail;
    
};
int mqin(){
    doublylist dbll;
    return 0;
}