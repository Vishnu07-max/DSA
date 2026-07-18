#include<iostream>
#include<vector>
using namespace std;

int search(int arr[],int si,int ei ,int tar){
    if(si>ei){
        return -1;
    }

    int mid=si+(ei-si)/2;
    if(arr[mid]==tar){
        return mid;

    }
    if(arr[si]<=arr[mid]){//l1
        if(arr[si]<=tar && tar<=arr[mid]){

        
        //left half 
        return search(arr,si,mid-1,tar);

        }else{
            //right half
            return search(arr,mid+1,ei,tar);

        }
    }else{
        if(arr[mid]<=tar && tar<=arr[ei]){ //l2
            //right search
            return search(arr,mid+1,ei,tar);
        }else{
            // left search
            return search(arr,si,mid-1,tar);
        }
    }
}
int main(){
    int arr[7]={4,5,6,7,0,1,2};
    int n=7;
    cout<<"idx:"<<search(arr,0,n-1,1)<< endl;
    return 0;
}

