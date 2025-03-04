#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>fourSum(vector<int>&arr,int target){
    int n=arr.size();
    vector<vector<int>>ans;
    set<vector<int>>s;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    int sum=arr[i]+arr[j]+arr[k]+arr[l];
                    if(sum==target){
                        vector<int>temp={arr[i],arr[j],arr[k],arr[l]};
                        sort(temp.begin(),temp.end());
                        s.insert(temp);
                    }
                }
            }
        }
    }
    ans.assign(s.begin(),s.end());
    return ans;
}
int main(){
    vector<int>arr={4,3,3,4,4,2,1,2,1,1};
    vector<vector<int>>sol=fourSum(arr,9);
    for(auto it:sol){
        for(auto ele:it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}