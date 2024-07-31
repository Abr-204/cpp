#include <iostream>
using namespace std;
int insertionsort(int arr[],int n){
    int temp;
    int j;
    int i;
    for(int i=1;i<n;i++){
        return temp=arr[i];
    }
    for(int j=n-1;j>=0;j--){
        if(arr[j]>arr[temp]){
            swap(arr[j],arr[j+1]);
        }
    
    else{
        break;
    }
    }
      arr[j+1]=temp;
}
  

int main()
{
    int arr[7]={10,1,7,4,8,2,11};
    int n=7;
    
   
    insertionsort(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
        return 0;
    }
    
}
