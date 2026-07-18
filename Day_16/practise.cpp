#include<iostream>
#include<string>
using namespace std;
class Person{
    protected:

    string name;
    int age;
    public:
    Person(string n,int a){

    
    name=n;
    age=a;
    }


};
class Student:public Person{
    private :
     string Studentid;

    public:
    
    Student(string n,int a,string id):Person(n,a){
        Studentid=id;
        
    }
    void displayStudentinfo(){
        cout<<"name:"<<this->name<<endl;
        cout<<"age:"<<this->age<<endl;
        cout<<"Studentid:"<<this->Studentid<<endl;
    }

};
int main(){
    Student student("alice",20,"s12345");
    student.displayStudentinfo();
    return 0;
}

