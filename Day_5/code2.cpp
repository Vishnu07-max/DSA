#include<iostream>
using namespace std;
int quad(int a,int b){
    return a*a+b*b+2*a*b;

}
int main(){
    cout<<quad(10,20)<<endl;
}