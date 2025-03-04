#include<bits/stdc++.h>
using namespace std;
void removebrackets(string str){
    string ans;
    for(int i=0;i<str.size();i++){
        if(str[i]!='(' && str[i]!=')'){
            ans.push_back(str[i]);
        }
    }
    cout<<ans;
}
int main(){
    string str="(Abhay)";
    removebrackets(str);
}
  
  
  
