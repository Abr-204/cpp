#include<iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid=(s+e)/2;
    int leftlen=mid-s+1;
    int rightlen=e-mid;
    int *left=new int[leftlen];
    int *right=new int[rightlen];
    int k=s;
    for(int i=0;i<leftlen;i++){
        arr[k++]=left[i];
    }
    k=mid+1;
    for(int i=0;i<rightlen;i++){
        arr[k++]=right[i];
    }
    int leftindex=0;
    int rightindex=0;
    while(leftindex<leftlen && rightindex<rightlen){
        if(left[leftindex]<right[rightindex]){
            arr[k++]=left[leftindex++];
        }
        else{
            arr[k++]=right[rightindex++];
        }
        while(leftindex<leftlen){
          arr[k++]=left[leftindex++];  
        }
        while (rightindex<rightlen)
        {
             arr[k++]=right[rightindex++];
        }
        delete[] left;
        delete[] right;
    }
}
void mergesort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);

    mergesort(arr,s,e);
}
int main(){
    int arr[]={5,3,9,1,4};
    int n=5;
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
        cout<<endl;
        return 0;
    }
}