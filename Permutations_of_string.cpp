#include<iostream>
#include<vector>
using namespace std;
class Solution {
    void solve(vector<int>& nums,int index,vector<vector<int>>&ans){
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[i],nums[index]);
            solve(nums,index+1,ans);
            swap(nums[i],nums[index]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        solve(nums,0,ans);
        return ans;
    }
};
int main(){
    Solution sol;
    vector<int>nums={1,2,3};
    vector<vector<int>> res=sol.permute(nums);
    for(const auto &ans:res){
            cout<<"{";
            for(int permutation:ans){
                cout<<permutation<<"";
            }
            cout<<"}\n";
    }
}
