#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"enter a number:"<<endl;
    cin>>n;
    int temp=n;
    int rev=0;
    while(n>0){
        int d=n%10;
        rev=rev*10+d;
        n=n/10;

    }
    if(temp==rev){
        cout<<"palindrome"<<endl;

    }
    else{
        cout<<"not palindrome"<<endl;
    }


}