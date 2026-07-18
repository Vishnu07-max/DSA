#include<iostream>
using namespace std;
void func(int mat[][4],int n ,int m){
    //cout<<"0 row ptr"<<mat<<endl;
    //cout<<"1 row ptr"<<mat+1<<endl;
    //cout<<"2 row ptr"<<mat+2<<endl;
//row pointers
   // cout<<"0 row value"<<*mat<<endl;
    //cout<<"1 row value"<<*(mat+1)<<endl;
    //cout<<"2 row value"<<*(mat+2)<<endl;
    cout<<*(*(mat+2)+2);


}
void func2(int (*mat),int n,int m){

}
int main(){
    int mat[4][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}};

         func(mat,4,4);
         return 0;          
}