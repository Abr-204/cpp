#include<bits/stdc++.h>
using namespace std;
char maxchar(string str){
    char ans;
    int maxfreq=0,cnt[256]={0};
    int n=str.size();
    for(int i=0;i<n;i++){
        cnt[str[i]]++;
        if(cnt[str[i]]>maxfreq){
            maxfreq=cnt[str[i]];
            ans=str[i];
        }
    }
    return ans;
}
    
int main(){
    string str="apple";
    cout<<maxchar(str);
}