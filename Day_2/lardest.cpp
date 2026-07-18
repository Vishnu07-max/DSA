#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"enter c:";
    cin>>c;
    if(a>=b && a>=c){
        cout<<"a is the largest :";

    }else if (b>=a && b>=c){
        cout<<"b is the largest :";

    } else{
        cout<<"c is the largest:";
    }

}

