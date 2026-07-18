#include<iostream>
using namespace std;
int main(){
    int eng;
    int maths;
    int hindi;
    cout<<"enter the english marks:";
    cin>>eng;
    cout<<"enter the maths marks:";
    cin>>maths;
    cout<<"enter the hindi marks:";
    cin>>hindi;

     int avg=(eng+maths+hindi)/3;
    cout<<"the average is: "<<avg;

}