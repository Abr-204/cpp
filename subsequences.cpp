#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
void solve(string str,string output,int index,vector<string> &ans){
    if(index>=str.size()){
        if(output.length()>0){
        ans.push_back(output);
        return;
        }
    }
    solve(str,output,index+1,ans);
    output.push_back(str[index]);
    solve(str,output,index+1,ans);
}
public:
    vector<string> subsequences(string str){
        vector<string> ans;
        string output;
        int index=0;
        solve(str,output,index,ans);
        return ans;
    }
};
int main() {
    Solution sol;
    string str = "abc";
    vector<string> result = sol.subsequences(str);
    
    for (const auto& subset : result) {
         cout << subset << "";
    }
    cout<<endl;
    return 0;
}