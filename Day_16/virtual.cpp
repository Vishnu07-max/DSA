#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void draw ()=0;
};
class Circle :public Shape{
    public:
    void draw (){
        cout<<"draw circle"<<endl;
    }
};
class Square :public Shape{
    public:
    void draw (){
        cout<<"draw square"<<endl;
    }
};
int main(){
    Circle cir1;
    cir1.draw();
    Square sqr1;
    sqr1.draw();
    
    return 0;
}