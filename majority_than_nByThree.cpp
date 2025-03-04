#include<bits/stdc++.h>
using namespace std;
vector<int>maj(vector<int>&arr){
    int n=arr.size();
    vector<int>v;
    for(int i=0;i<n;i++){
        if(v.size()==0||(v.size() == 1&&v[0]!=arr[i])){
        int cnt=0;
            for(int j=0;j<n;j++){
                if(arr[j]==arr[i])
                    cnt++;
            }
            if(cnt>n/3)
                v.push_back(arr[i]);
        }
        if(v.size()==2) break;
    }
    return v;
}
int main(){
    vector<int>arr={11,33,33,11,33,11};
    vector<int>ans=maj(arr);
    for(auto it:ans){
        cout<<it<<" ";
    }
}
