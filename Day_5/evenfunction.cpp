#include<iostream>
using namespace std;
int iseven(int a){
    if (a%2==0){
        return true;
    }
    else{
        return false;
    }



    
}
int main(){
    cout<<iseven(10)<<endl;
}