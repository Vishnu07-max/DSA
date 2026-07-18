#include<iostream>
#include<string>
using namespace std;
class Bankaccount{
    private:
    int accountNumber;
    double balance;

    public:
    Bankaccount(int accn,double bal){
    accountNumber=accn;
    balance=bal;

    }

    void deposit(double amount){
        balance+=amount;


    }
    void withdraw(double amount){
        if(amount<=balance){
            balance-=amount;
        } else{
            cout<<"insufficient balance \n";

        }
    }
    double getbalance(){//double return krega 
        return balance;

    }
};
int main(){
    Bankaccount myaccount(123456,500.00);
    myaccount.deposit(150.0);
    myaccount.withdraw(100.0);
    cout<<"the current balance is :"<<myaccount.getbalance()<<endl;
    return 0;
}