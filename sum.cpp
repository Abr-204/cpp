//with recursion
#include<iostream>
using namespace std;
int getSum(int arr[],int n){
   if(n==0) return 0;
   if(n==1) return arr[0];
   return arr[0]+getSum(arr+1,n-1);
}
int main(){
    int n=6;
    int arr[6]={20,30,40,50,600,500};
    cout<<getSum(arr,n);
}

//without recursion
#include<iostream>
using namespace std;
int getSum(int arr[],int n){
    int sum=0;
   for(int i=0;i<n;i++){
       sum+=arr[i];
   }
   return sum;
}
int main(){
    int n=6;
    int arr[6]={20,30,40,50,600,500};
    cout<<getSum(arr,n);
}