#include <iostream>
using namespace std;
void bubblesort(int *arr,int n){
    
    
    if(n==0||n==1){
        return ;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
           (arr[i]=arr[i+1]);
        }
    }
    bubblesort(arr,n-1);
    
    }

int main()
{
    int arr[7]={10,1,7,4,8,2,11};
    int n=7;
    
   
    bubblesort(arr,n);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}
