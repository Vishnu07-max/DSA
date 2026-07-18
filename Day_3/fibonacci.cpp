#include<iostream>
using namespace std;
int main(){
    int n=10;
    int first=0;
    int second=1;
    cout<<first<<second<<endl;
    for (int i=2;i<=n;i++){
        int third=first+second;
        cout<<third<<endl;
        first=second;
        second=third;

    }
    cout<<endl;

}