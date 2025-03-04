#include<iostream>
using namespace std;
int power(int a,int n){
    if(n==0)
    return 1;
    return a*power(a,n-1);
}
int main(){
    int a=3;
    int n=4;
    cout<<power(a,n);
}

//a^b
#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0) return 0;
    if(b==1) return a;
    int ans=power(a,b/2);
    if(b%2==0) return ans*ans;
    return a*ans*ans;
}
int main(){
    cout<<power(2,9);
}