#include<iostream>
using namespace std;
bool isPalindrome(int n){
    int temp=n;
    int ans=0;
    while(temp>0){
        int digit=temp%10;
        temp/=10;
        ans=10*ans+digit;
    }
    if(ans==n) return 1;
    else return 0;
}
int main(){
    int n=131;
    bool res=isPalindrome(n);
    if(res) cout<<"Palindrome"<<"";
    else cout<<"Not"<<"";
    cout<<endl;
}