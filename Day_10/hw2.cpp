#include<iostream>
using namespace std;
int sum=0;
void calculateSum(int mat[][3],int n,int m){
    for(int j=0;j<m;j++){
        sum=sum+mat[1][j];
            
        }
        cout<<"the sum is="<<sum<<endl;
    }
    int main(){
        int matrix[3][3]={{1,4,9},
                          {11,4,3},
                          {2,2,3}};
        calculateSum(matrix,3,3);
        return 0;

        
    }

