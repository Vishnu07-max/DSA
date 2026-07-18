#include<iostream>
using namespace std;
int count=0;
void search(int mat[][3],int n ,int m,int key){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==key){
                count++;
            }
        }
    }
    cout<<"the total count is="<<count<<endl;

    




}
int main(){
    int matrix[2][3]={{4,7,9},
                   {8,8,7}};
    search(matrix,2,3,7);
    return 0;
}
