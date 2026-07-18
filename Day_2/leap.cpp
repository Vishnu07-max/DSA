#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year :";
    cin>>year;
    if (year%4==0){
        cout<<"the year is leap year";

    } else if (year%100==0){
        cout<<"the year is not leap year";

    }else if(year%400==0){
        cout<<"the year is leap year";

    }else{
        cout<<"it is not leap year";
    }

}