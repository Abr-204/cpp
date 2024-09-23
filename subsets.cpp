#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
void solve(vector<int>& nums,vector<int> output,int index,vector<vector<int>> &ans){
    if(index>=nums.size()){
        ans.push_back(output);
        return;
    }
    solve(nums,output,index+1,ans);
    int ele=nums[index];
    output.push_back(ele);
    solve(nums,output,index+1,ans);
}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(nums,output,index,ans);
        return ans;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = sol.subsets(nums);
    
    for (const auto& subset : result) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}\n";
    }
    return 0;
}