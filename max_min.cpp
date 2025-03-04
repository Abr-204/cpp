#include<bits/stdc++.h>
using namespace std;
void digit(int n){
    int maxi=INT_MIN,mini=INT_MAX;
    while(n!=0){
        int d=n%10;
        maxi=max(d,maxi);
        mini=min(d,mini);
        n/=10;
    }
    cout<<maxi<<" "<<mini;
}
int main(){
    int n=23004;
    digit(n);
}