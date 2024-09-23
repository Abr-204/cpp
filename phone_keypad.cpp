#include<iostream>
#include<vector>
using namespace std;
class Solution {
    void solve(string digits,int index,vector<string> &ans,string output,string map[]){
        if(index>=digits.size()){
            ans.push_back(output);
            return;
        }
        int number=digits[index]-'0';
        string val=map[number];
        for(int i=0;i<val.length();i++){
            output.push_back(val[i]);
            solve(digits,index+1,ans,output,map);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0)
            return ans;
        string output;
        int index=0;
        string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,index,ans,output,map);
        return ans;
    }
};
int main(){
    Solution sol;
    string digits = "23";
    vector<string> result = sol.letterCombinations(digits);
    for (const string& combination : result) {
        cout << combination << " ";
    }
    cout << endl;
    return 0;
}