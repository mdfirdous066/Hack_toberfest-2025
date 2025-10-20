vector<vector<int>> ans;
vector<int> temp;
int sum=0;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        ans.clear();
        temp.clear();
        solve(0,candidates,target,candidates.size());
        return ans;
    }
    void solve(int i,vector<int>& candidates, int target,int n){

        if(sum==target){
            ans.push_back(temp);
            return;
        }
        if(i==n) return;

        //take
        if(sum + candidates[i] <= target){
            sum+=candidates[i];
            temp.push_back(candidates[i]);
            solve(i,candidates,target,n);
            temp.pop_back();
            sum-=candidates[i];
        }

        //ntake
        solve(i+1,candidates,target,n);


    }
};
