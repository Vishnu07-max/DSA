#include<iostream>
using namespace std;
int main(){
    int n=10289;
    int rev=0;
    while(n>0){
        int lastdigit=n%10;
        rev=rev*10+lastdigit;
        n=n/10;

    }
    cout<<"the reverse is="<<rev<<endl;
    
}