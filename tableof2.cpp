#include <iostream>
using namespace std;
int multiplication(int f,int s,int n ){
if(n==0){
    return 0;
}
if(n==1){
    s=2;
}
else{
    int rem=2+multiplication(f,s,n);
    return rem;
}
    return multiplication(f,s,n);
}

int main()
{
    int f=2;
    int n;
    int s=2*n;
    multiplication(f,s,n);

    return 0;
}
