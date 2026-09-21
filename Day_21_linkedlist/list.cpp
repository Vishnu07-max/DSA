#include<iostream>
#include<list>

#include<iterator>
using namespace std;
void printList(list<int>ll){
    list<int>::iterator itr;
    for(itr =ll.begin();itr != ll.end();itr++){

    }
    cout<<endl;

}
Node* splitAtMid(Node* heaad){
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;
    while(fast != NULL && fast->next !=NULL){
          prev = slow;
        slow = slow->next;
        fast = fast->next->next
    }
    if(prev != NULL){
        prev->next = NULL;
    }
    return slow;

}
Node* merge(Node* left,Node* right){
    List ans;
    Node* i= right;
    Node* j= right;
    while(i !=NULL && j !== NULL){
        if(i-> data <= j-> data){
            ans.push_back(i->data);
            i = i->next;
        } else{
            ans.push_back(j->data);
            j= j->next;
        }
    }
    while(i !=NULL){
        ans.push_back(i->data);
        i = i->next;
    }
    while(j !=NULL){
        ans.push_back(j->data);
        j = j->next;
    }
}
void mergesort(Node* head){
    if (head == NULL || head->next == NULL){
      return;


    }
    Node* rightHead = splitAtMid(head);
    mergesort(head);
    mergesort(rightHead);
    merge(head,rightHead);
}
int main(){
    list<int> ll;
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(3);
    ll.push_back(4);
    printList(ll);
    cout<<ll.size()<<endl;
    cout<<"head = "<<ll.front()<<"\n";
    cout<<"tail ="<<ll.back()<<"\n";
    
    return 0;
}