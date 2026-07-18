#include<iostream>
using namespace std;
int fastexpo(int x,int n){
    int ans=1;
    while(n>0){
        int lastdigit=n&1;
        if(lastdigit){
            ans=ans*x;

        }
        x=x*x;
        n=n>>1;


    }
    cout<<ans<<endl;
}
int main(){
    fastexpo(3,5);
    return 0;
}
