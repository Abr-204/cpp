#include<iostream>
#include<climits>
using namespace std;
int maxProfit(int arr[],int n){
    int maxProfit=0;
    int minPrice=INT_MAX;
    for(int i=0;i<n;i++){
        maxProfit=max(arr[i]-minPrice,maxProfit);
        minPrice=min(minPrice,arr[i]);
    }
    return maxProfit;
}

int main(){
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxProfit(arr,n);
}