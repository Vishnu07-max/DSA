#include<iostream>
#include<string>
using namespace std;

class user{
private:
    int id ;
    string password;
public:
string username;

user(int id){
    this->id=id;

}
//getter
string getpassword(){
    return password;

}
//setter
string setpassword(string password){
    this->password=password;
}



};
int main(){
    user user1(101);
    user1.username="vishnu";
    user1.setpassword("abcd");
    cout<<"username"<<user1.username<<endl;
    cout<<"password"<<user1.getpassword()<<endl;
    return 0;
}
