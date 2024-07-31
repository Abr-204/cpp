#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<"Size of array:"<<n<<endl;
    

for(int i=0;i<=n;i++){
    cout<<arr[i]<<endl;
}
}
bool linsearch(int arr[],int n,int key){
    if(n==0){
        return false;
    }
    if(key=arr[0]){
        return true;
    }
    else{
        bool rem=linsearch(arr+1,n-1,key);
      
        return rem;
    }
}
int main(){
    int arr[5]={40,80,20,30,50};
    int n=5;
    
    int key=60;
   
    
    bool ans=linsearch(arr,n,key);
    if(ans){
        cout<<"Found"<<endl;
        
    }
    else{
        cout<<"Not Found"<<endl;
        
    }
}