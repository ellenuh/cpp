#include<iostream>
#include<string>
using namespace std;
int main(){
    int i,j,k;
    string s,t;
    int key;
    cin>>key;
    cin>>s;
    for(i=0;i<s.size();i++){
        t+=(s[i]-'A'+key)%26+'A';
    }
    cout<<t<<'\n';
    return 0;
}

//ceasar cipher encryptor.
