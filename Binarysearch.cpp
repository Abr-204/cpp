#include<iostream>
using namespace std;

bool binsearch(int arr[],int n,int s,int e,int key){
    
    int m=s+(e-s)/2;
    if(s>e){
        return false;
    }
    if(arr[m]==key){
        return true;
    }
    if(key>arr[m]){
        return binsearch( arr, n, m+1, e, key);
    }
    else{
        return binsearch( arr, n, s, e-1, key);
    }

}
int main(){
    int arr[5]={40,80,20,30,50};
    int n=5;
    int key=60;
    int s=0;
    int e=4;
   
    
    bool ans=binsearch(arr,n,s,e,key);
    if(ans){
        cout<<"Found"<<endl;
        
    }
    else{
        cout<<"Not Found"<<endl;
        
    }
}