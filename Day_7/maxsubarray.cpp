#include<iostream>
#include<climits>
using namespace std;
int maxsubarraysum1(int *arr,int n){
    int maxsum=INT_MIN;

    
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int sum=0;
            for (int i=start;i<=end;i++){
                sum=sum+arr[i];
            }
            cout<<sum<<" ";
            maxsum=max(maxsum,sum);



            
                /* code */
            }
            cout<<endl;
            

        }
        cout<<"max sum is"<<maxsum<<endl;

    }




int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);

    maxsubarraysum1(arr,n);
    return 0;

}
