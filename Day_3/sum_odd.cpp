#include<iostream>
using namespace std;
int main(){
    int n=10289;
    int digsum=0;

    while(n>0){
        int lastdigit=n%10;
        if(lastdigit%2!=0){
        digsum=digsum+lastdigit;
        }
        n=n/10;
        
    }
    cout<<"the sum ="<<digsum<<endl;
    
}