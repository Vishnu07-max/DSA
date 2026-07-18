#include<iostream>
using namespace std;
int setbit(int num,int i){
    int bitmarks=1<<i;
    return (num|bitmarks);

}
int main(){
    cout<<setbit(6,3)<<endl;
    return 0;
}

