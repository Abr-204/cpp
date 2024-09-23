//without recursion
#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
    if(arr[i+1]<arr[i]) return false;
}
    return true;
}
int main(){
    int n=6;
    int arr[6]={20,30,40,50,600,500};
    cout<<isSorted(arr,n);
}

//with recursion
#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
   if(n==0||n==1) return true;
   if(arr[0]>arr[1]) return false;
   return isSorted(arr+1,n-1);
}
int main(){
    int n=6;
    int arr[6]={20,30,40,50,600,500};
    cout<<isSorted(arr,n);
}