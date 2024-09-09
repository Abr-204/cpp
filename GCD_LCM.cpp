#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    if(a==b) return a;
    if(a>b) return gcd(a-b,b);
    return gcd(a,b-a);
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int a=15,b=20;
    cout<<lcm(a,b)<<endl;
    cout<<gcd(a,b)<<endl;
}