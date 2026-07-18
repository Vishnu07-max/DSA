#include<iostream>
#include<string>
using namespace std;
class car{
    string name;
    string colour;


public:
    car(string namevalue,string colorvalue){
        cout<<"constructor is called object is created \n";
        name=namevalue;
        colour=colorvalue;
    }   
    void start(){
        cout<<"car has started \n";
    }
    void stop(){
        cout<<"car stopped \n";

    }
    string getname(){
        return name;
    }
};
int main(){
    car c1("tata","white");
    
    cout<<"car name"<<c1.getname()<<endl;
}



