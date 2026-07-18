#include<iostream>
using namespace std;
int palindrome(int n){
    int temp=n;
    int rev=0;
    while(n>0){
        int d=n%10+d;
        rev=rev*10+d;
        n=n/10;
    }
    if(temp==rev){
        return true;

    }
    else{
        return false;
    }
}
int main(){
        cout<<palindrome(123)<<endl;
        return 0;

    }

