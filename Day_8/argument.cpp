#include<iostream>
using namespace std;
//void change(int a){
    //a=20;
    ////cout<<a<<endl;

//}
void change(int *ptr){
    *ptr=20;
    cout<<*ptr<<endl;

}


int main(){
    int a=10;
    change(&a);//yha pe changes ho gye ptr ki wjh se
   cout<<a<<endl;

}