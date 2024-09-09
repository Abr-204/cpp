#include<bits/stdc++.h>
using namespace std;
bool isArmstrong(int n){
    int digit=log10(n)+1;
    int ans=0;
    int temp=n;
    while(temp>0){
        int d=temp%10;
        ans+=pow(d,digit);
        temp/=10;
    }
    if(ans==n){
        return 1;
    }
    else{
        return 0;
    }
    
    
}
int main(){
    int n=407;
    bool res=isArmstrong(n);
    if(res==true){
        cout<<"Armstrong number"<<"";
    }
    else{
        cout<<"Not"<<"";
    }
    cout<<endl;
    
}