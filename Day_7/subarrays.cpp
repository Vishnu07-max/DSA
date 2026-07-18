#include<iostream>
using namespace std;

int printsubarrays(int *arr,int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            cout<<"("<< start<<","<<end<<")";

        }
        cout<<endl;

    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    printsubarrays(arr,n);
    return 0;


}