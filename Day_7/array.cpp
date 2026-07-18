#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,6,9,12};
    int n=sizeof(arr)/sizeof(int);

    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];

        }
    }
    cout<<"largest is:"<<max<<endl;
    return 0;

}