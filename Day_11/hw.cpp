#include<iostream>
using namespace std;
void Vowel(string str){
    int vowelcount=0;
    for (int i=0;i<str.length();i++){
        if(str[i]=='a'|| str[i]=='e' || str[i]=='i'|| str[i]=='o' ||str[i]=='u'){
            vowelcount++;
        }
    }
    cout<<"total vowelcount"<<vowelcount;



}
int main(){
    Vowel("apple");
    return 0;
}