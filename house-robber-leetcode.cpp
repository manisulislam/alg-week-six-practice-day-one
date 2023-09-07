class Solution {
public:
    int dp[1005];
    int knapsack_house(int i,vector<int>&nums){
        int n= nums.size();
        if(i>=n) return 0;
        if(dp[i] != -1) return dp[i];
        int op1= knapsack_house(i+2, nums)+ nums[i];
        int op2= knapsack_house(i+1, nums);
        
        dp[i]= max(op1, op2);
        return dp[i];
        
        
        
    }
    int rob(vector<int>& nums) {
        int n= nums.size();
        for(int i=0; i<n;i++){
            dp[i]=-1;
        }
       return  knapsack_house(0, nums);
    }
};