#include<iostream>
using namespace std;
int issum(int n){
    int sum=0;
    while(n>0){
        int d=n%10;
        sum=sum+d;
        n=n/10;

    }
    return sum;


}
int main(){
    cout<<issum(123)<<endl;
    return 0;
}