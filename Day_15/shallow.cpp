#include<iostream>
#include<string>
using namespace std;

class car {
public:
    string name;
    string color;
    int *mileage;

    car(string name, string color) {
        this->name = name;
        this->color = color;
        mileage = new int;
        *mileage = 12;
    }

    // Deep Copy Constructor
    car(car &original) {
        cout << "copying original to new\n";
        name = original.name;
        color = original.color;

        mileage = new int;       // new memory
        *mileage = *original.mileage;  // copy value
    }

~car(){
    cout<<"deleting object..\n";
    if(*mileage !=NULL){
        delete mileage;
        mileage =NULL;

    }
}
};

int main() {
    car c1("maruti 800", "blue");


    cout << c1.name << endl;
    cout << c1.color << endl;
    cout << *c1.mileage << endl;

  
    return 0;
}
   