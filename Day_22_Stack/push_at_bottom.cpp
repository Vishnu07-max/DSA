#include<iostream>
#include<stack>
#include<string>
using namespace std;
void pushatbottom(stack<int> &s,int val){
    if(s.empty()){
        s.push(val);//empty hai to push hoga bottom me 
        return;

    }
    int temp= s.top();
    s.pop();
    pushatbottom(s,val);
    s.push(temp);


}
string reverseString(string str){
    string ans;
    stack<char> s;
    for(int i=0;i<str.size();i++){
        s.push(str[i]);

    }
    while(!s.empty()){
        char top =s.top();
        ans+=top;
        s.pop();

    }
    return ans;
}
void reverse(stack<int> s){
    if(s.empty()){
        return;

    }
    int temp=s.top();
    s.pop();
    reverse (s);
    pushatbottom(s,temp);

}
void printstack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";

}
void stackspanproblem(vector<int> stock, vector<int> span){
    stack<int> s;
    s.push(0);
    span[0]=1;
    for(int i=1;i<=stock.size();i++){
        int currprice = stock [i];

        while(!s.empty() && currprice>=stock[s.top()]){
            s.pop();



        }
        if(s.empty()){
            span[i]=i+1;

        }else{
            int prevHigh=s.top();
            span[i]=i-prevHigh;
        }

        
    }
    for(int i=0;i<span.size();i++){
        cout<<span[i]<<"";

    }
    cout<<endl;
}
int main(){
    vector<int> stock={100,80,60,70,60,85,100};
    vector<int> span={0,0,0,0,0,0,0,};
    stockspanproblem(stock,span);
    return 0;
}
    
   