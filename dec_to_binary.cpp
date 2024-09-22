#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int ans=0;
    while(n>0){
        int digit=n%2;
        ans+=(digit*pow(10,i));
        n/=2;
        i++;
    }
    cout<<ans;
}