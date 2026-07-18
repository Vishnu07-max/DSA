#include<iostream>
#include<climits>
using namespace std;

void maxprofit(int *price,int n){
    int  bestbuy[1000];
    bestbuy[0]=INT_MAX;
    cout<<bestbuy[0]<<",";
    for(int i=1;i<n;i++){
        bestbuy[i]=min(bestbuy[i-1],price[i-1]);
        cout<<bestbuy[i]<<",";

    }
    int maxprofit=0;
    for(int i=0;i<n;i++){
        int currprofit=price[i]-bestbuy[i];
        maxprofit=max(maxprofit,currprofit);
        
    }
    cout<<"maxprofit="<<maxprofit<<endl;
}
int main(){
    int arr[6]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(int);
    maxprofit(arr,n);
    return 0;
}