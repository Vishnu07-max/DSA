#include<iostream>
using namespace std;
int clearbit(int num,int i){
    int bitmarks=~(1<<i);
    return (num&bitmarks);
}
int main(){
    cout<<clearbit(6,1)<<endl;
    return 0;
}