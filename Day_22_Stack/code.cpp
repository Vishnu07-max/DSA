#include<iostream>
#include<vector>
using namespace std;
// create stack using vector
template<class T>
class Stack{
    vector<T>vec;
public:
    void push(T val){
        vec.push_back(val);

    }
    void pop(){
        if (isEmpty()){
            cout<<"stack is empty"<<"\n";
            return;
        }
        vec.pop_back();

    }
    
    
    T top(){
        //if(isEmpty()){
        //cout<<"stack is empty.\n";
       // return -1;
        //}
        int lastidx = vec.size()-1;
        return vec[lastidx];
    }
    bool isEmpty(){
        return vec.size() == 0;
    }
};

int main(){
    Stack <int> s;

    s.push('a');
    s.push('b');
    s.push('c');
    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}