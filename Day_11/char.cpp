#include<iostream>
#include<cstring>
using namespace std;
int main(){
   // char word[30];
    //cin>>word;
   // cout<<"your word was:"<<word<<endl;//ignore ehitespace 
    //cout<<"lenght:"<<strlen(word)<<endl;

    char sentence[30];
    cin.getline(sentence,30);
    cout<<"your word was:"<<sentence<<endl;
    cout<<"length is:"<<strlen(sentence)<<endl;
}