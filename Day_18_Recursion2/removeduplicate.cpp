#include<iostream>
#include<string>
using namespace std;
void removeduplicates(string str,string ans,int i,int map[26]){
    if(i == str.size()){
        cout<<"ans:"<<ans<<endl;
        return ;
    }
    int mapidx=(int)(str[i]-'a');
    if(map[mapidx]){
        removeduplicates(str,ans,i+1,map);

    }
    else{
        map[mapidx]=true;
        removeduplicates(str,ans+str[i],i+1,map);

    }
}
int main(){
    string str="apnnacollege";
    string ans="";
    int map[26]={false};
    removeduplicates(str,ans,0,map);
    return 0;

}