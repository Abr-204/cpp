#include <iostream>
using namespace std;
bool isPalindrome(string &st,int s,int e){
    while(s<e){
    if(st[s]!=st[e]){
    return false;
    }
    s++;
    e--;
    }
    return true;
}

    int longestPalindromicSubstring(string &st){
        
    int start=0;
    int len=1;
    int n=st.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(isPalindrome(st,i,j) && (j-i+1)>len){
                start=i;
                len=j-i+1;
            }
        }
    }
    return max(start,len);
    }


int main()
{
    string st="Kartravya";
    int s=0;
    int e=st.size()-1;
    cout<<longestPalindromicSubstring(st);
    return 0;
}