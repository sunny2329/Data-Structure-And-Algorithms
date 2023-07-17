#include <bits/stdc++.h>
using namespace std;

void solves(vector<string>& ans, string str, string output, int i) {
    //base case
    if(i>=str.length()) {
        if(output.length()>0)
        ans.push_back(output);
        return ;
        }
    
    //exclude
    solves(ans, str, output, i+1);
    //include
    output.push_back(str[i]);
    solves(ans, str, output, i+1);
}

vector<string> subsequences(string str){
	
	vector<string> ans;
    string output = "";
    solves(ans,str,output,0);
    return ans;
	
}




void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans){
    if(index>=nums.size()) {
        ans.push_back(output);
        return;
    }

    solve(nums,output,index+1,ans);

    int element = nums[index];
    output.push_back(element);
    solve(nums,output,index+1,ans); 
}

vector<vector<int>> subsets(vector<int>& nums){
    vector<vector<int>> ans;

    vector<int> output;

    int index = 0;

    solve(nums,output,index,ans);
    return ans;
}


int main()
{



}