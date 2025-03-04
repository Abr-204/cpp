#include<bits/stdc++.h>
using namespace std;
vector<int> repeatandmiss(vector<int>&arr){
    int repeating=-1,missing=-1;
    int n=arr.size();
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[j]==i)
                cnt++;
        }
        if(cnt==2) repeating=i;
        if(cnt==0) missing=i;
        if(repeating!=-1 && missing!=-1)
            break;
    }
    return {repeating,missing};
}
int main(){
    vector<int>arr={4,3,6,2,1,1};
    vector<int>ans=repeatandmiss(arr);
    cout<<ans[0]<<","<<ans[1];
}
