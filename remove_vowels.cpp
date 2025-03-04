#include<bits/stdc++.h>
using namespace std;
void removevowels(string str){
    int n=str.length();
    for(int i=0;i<n;i++){
        str[i]=tolower(str[i]);
    }
    for(int i=0;i<n;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            for(int j=i;j<n;j++){
                str[j]=str[j+1];
            }
            i--;
            n--;
        }
    }
    cout<<str;
}
int main(){
    string str="Abhay";
    removevowels(str);
}
  
  
  
