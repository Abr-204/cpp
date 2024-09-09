#include <iostream>
using namespace std;
bool isMagic(long n){
    while(n>9){
        long ans=0;
        while(n>0){
            long digit=n%10;
            ans+=digit;
            temp/=10;
        }
        if(ans==1) return 1;
        n=ans;
    }
    return 0;
}

int main()
{
    long n=99999999991;
    bool res=isMagic(n);
    if(res) cout<<"Magic no."<<"";
    else cout<<"Not"<<"";
    cout<<endl;
    return 0;
}