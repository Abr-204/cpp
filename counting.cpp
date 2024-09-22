#include<iostream>
using namespace std;
void cnt(int n){
    if(n==0)
    return ;
    cnt(n-1);
    cout<<n<<endl;
}
int main(){
    int n=4;
    cnt(n);
}