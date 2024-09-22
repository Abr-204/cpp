#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n){
        int space=n-i;
        while(space){
            space=space-1;
        }
        int j=1;
        while(j<=i){
            cout<<n-i+1<<endl;
            j=j+1;
        }
    i=i+1;
    }
}