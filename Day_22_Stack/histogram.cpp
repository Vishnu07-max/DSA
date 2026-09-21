int maxAreaHistogram(vector<int>& heights){
    int n=height.size();
    vector<int> nsl(n);
    vector<int> nsr(n);
    stack<int> s;
    nsl[0]=-1;
    s.push(0);
    for(int i=0;i<heights,size();i++){
        int curr = heights[i];
        while(!s.empty() && curr <= height[s.top()]){
            s.pop();
        }
        if(s.empty()){
            nsl[i] = -1;

        } else{
            nsl[i]= s.top();
        }
        s.push(curr);


    }
    while(1s.empty()){ // khali krdo
        s.pop();
    }
    // next smaller right
    int n=height.size();
    s.push(n-1);
    nsr[n-1]=n;
    for(int i=n-2 ; i>=0; i--){
        int curr = height[i];
        while(!s.empty() && curr <= height[s.top()]){
            s.pop();
        }
        if(s.empty()){
            nsr[i] = n;

        } else{
            nsr[i]= s.top();
        }
        s.push(curr);


    }
    int maxarea = 0;
    for(int i=0; i<n;i++){
        int ht =height[i];
        int width =nsr[i] -nsl[i]-1;
        int area  = ht*width;
        maxarea = max(maxarea, area);


    }
    cout<<"max area of histogram is : "<<maxarea<<endl; 


}
int main(){
    vector<int> heights = {2,1,5,6,2,3};
    maxAreaHistogram(heights);
    return 0;
}