#include<iostream>
using namespace std;
float ap(float a,float d,int n){
    float sum=0;
    for(int i=1;i<=n;i++){
        sum+=a;
        a+=d;
    }
    return sum;
}
float gp(float a,float r,int n){
    float sum=0;
    for(int i=1;i<=n;i++){
        sum+=a;
        a=a*r;
    }
    return sum;
}

int main(){
    cout<<ap(1.5,3,4)<<" ";
    cout<<gp(2,2,4)<<" ";
}