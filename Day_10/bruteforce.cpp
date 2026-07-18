#include<iostream>
using namespace std;
void search(int mat[][4],int n,int m,int key){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j] == key){
                cout<<"Key found at"<<i<<","<<j<<endl;
                return;
            }else{
                cout<<"key not found"<<endl;
                return;
            }




        }
        cout<<endl;
    }
}
int main(){
    int matrix[4][4]={{10,20,30,40},
                      {15,25,35,45},
                      {27,29,37,48},
                      {32,33,39,50}};
    search(matrix,4,4,60);
    return 0;

}