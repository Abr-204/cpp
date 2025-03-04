#include<bits/stdc++.h>
using namespace std;
vector<int>maj(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i])
                cnt++;
        }
        if(cnt>n/2)
            return {arr[i]};
    }
    return {-1};
}
int main(){
    vector<int>arr={2,2,1,1,1,2,1,1,2};
    int n=arr.size();
    vector<int>ans=maj(arr,n);
    cout<<ans[0];
    
}
