#include <iostream>
using namespace std;
int bubblesort(int arr[],int n){
    int i;
    int j;
    bool swapped;
    for(int i=1;i<n;i++){
        
    for(int j=0;j<n-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped=true;
        }
    
    }
    if(swapped==false){
        break;
    }
    }
}
int main()
{
    int arr[7]={10,1,7,4,8,2,11};
    int n=7;
    
   
    int bub=bubblesort(arr,n);
    cout<<bub<<endl;
    return 0;
}
