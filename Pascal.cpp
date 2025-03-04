//given the row number r and the column number c, and we need to find out the element at position (r,c). 
#include<iostream>
using namespace std;
int nCr(int n,int r){
    int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int pascaltriangle(int n,int r){
    return nCr(n-1,r-1);
}
int main(){
    cout<<pascaltriangle(5,3);
}

//Given the row number n. Print the n-th row of Pascal’s triangle.
#include<iostream>
using namespace std;
void pascaltriangle(int n){
    long long res=1;
    cout<<res<<" ";
    for(int i=1;i<n;i++){
        res=res*(n-i);
        res=res/i;
        cout<<res<<" ";
    }
}
int main(){
    pascaltriangle(5);
}