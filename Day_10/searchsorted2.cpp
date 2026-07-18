#include<iostream>
using namespace std;
void search(int mat[][4],int n ,int m,int key){
    int i=n-1, j=0;
    while(i<n && j>=0){
        if(mat[i][j]==key){
            cout<<"cell  found at="<<i<<","<<j<<endl;
            return;

        }else if(mat[i][j]<key){
            j++;

        }else{
            i--;

        }
        


    }
    cout<<"key not found"<<endl;
}
int main(){
    int matrix[4][4]={{10,20,30,40},
                      {15,25,35,45},
                      {27,29,37,48},
                      {32,33,39,50}};
    search(matrix,4,4,33);
    return 0;

}