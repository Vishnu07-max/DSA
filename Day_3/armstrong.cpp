#include<iostream>
using namespace std;
int main(){
    int n=123;
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        sum=sum+lastdigit*lastdigit*lastdigit;
        n=n/10;


    }
    cout<<"the armstrong of number is:"<<sum<<endl;

}