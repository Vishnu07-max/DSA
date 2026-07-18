#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int temp=n;
    int d;
    int sum=0;
    while(n>0){
        d=n%10;
        sum=sum+d*d*d;
        n=n/10;
        if(temp==sum){
            cout<<"the armstrong number is:"<<sum;
        }else{
            cout<<"the number is not armstrong";
        } 
    }

}