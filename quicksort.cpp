#include <iostream>
using namespace std;
void partition(int *arr,int s,int e){
    int pivot=arr[s];
    int count=0;
    for(int i=0;i<e;i++){
        count++;
    }
    int pivotindex=s+count;
    swap(arr[s],arr[pivotindex]);
    int i=s,j=e;
    while(i<pivotindex && j>pivotindex){
        while (arr[i]<pivot)
        {
            i++;
        }
        while (arr[j]>pivot)
        {
            j--;
        }
    if(i<pivotindex && j>pivotindex){
        swap(arr[i++],arr[j--]);
    }
    }
    return pivotindex;
}
void quicksort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
    quicksort(arr,s,e);
}


    
int main()
{
    int arr[7]={10,1,7,4,8,2,11};
    int n=7;
    
   
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
        cout<<endl;
        return 0;
    }
}