#include <iostream>
using namespace std;
void selectionsort(int arr[],int n){
    int minIndex;
    int i;
    int j;
    
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
    }
}
int main()
{
    int arr[7]={10,1,7,4,8,2,11};
    int n=7;
    
   
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
        cout<<endl;
        return 0;
    }
}
    
    
    
