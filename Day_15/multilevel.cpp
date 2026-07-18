#include<iostream>
#include<string>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"eats\n";

    }
    void breathe(){
        cout<<"breathes\n";

    }
};
class Mammal :public Animal{
    public:
    string bloodtype;
    Mammal(){
        bloodtype="warm";

    }
};
class Dog :public Mammal{
    public:
    void tailwag(){
        cout<<"a dog wags it tails\n";

    }
};
int main(){
    Dog d;
    d.eat();
    d.breathe();
    d.tailwag();
    cout<<d.bloodtype<<endl;
    return 0;
}
