#include<iostream>
using namespace std;
int transpose[3][2]={{0}};

void trans(int mat[][3],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             mat[j][i]=mat[i][j];
             //transpose

            
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<transpose[i][j]<<" ";
        }
    }
    
}
int main(){
    int matrix[2][3];
    trans(matrix,2,3);
    return 0;
}