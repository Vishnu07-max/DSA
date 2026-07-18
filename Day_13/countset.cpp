#include<iostream>
using namespace std;
int countsetbits(int num){
    int count=0;
    while(num>0){
        int lastdigit=num&1;
        count = count+lastdigit;
        num=num>>1;

    }
    cout<<count<<endl;
    return count;


}
int main(){
    countsetbits(10);
    return 0;
}