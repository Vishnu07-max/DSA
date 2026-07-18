#include<iostream>
using namespace std;
///time complexity big0nhai

int diagonalsum(int mat[][3],int n){
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=mat[i][i];
        if(i!=n-i-1){
            sum+=mat[i][n-i-1];
        }
    }
    cout<<"sum="<<sum<<endl;
    
    return sum;
}

int main(){
    int matrix[3][3]={{1,2,3},
                       {4,5,6},
                       {7,8,9}};
                       





diagonalsum(matrix,3);

    return 0;                   
}
