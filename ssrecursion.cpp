#include <iostream>
using namespace std;
 void selectionsort(int arr[],int n){
    int minIndex;
    int i;
    int j;
    
    if(n==0){
        return ;
    }
    for(int i=0;i<n-1;i++){
        int minIndex=i;
    }
    for(int j=i+1;j<n;j++){
        if(arr[minIndex]>arr[j]){
        int minIndex=j;
        }
    
    if(minIndex!=i){
        swap(arr[minIndex],arr[i]);
    }
    selectionsort(arr,n+1);
}
 }
int main()
{
    int arr[]={10,1,7,4,8,2,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    
   
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
        cout<<endl;
        return 0;
    }
    
  
}