class Solution {
public:
    int rob(vector<int>& nums) {
        const int N = nums.size();
        int dp[N];
        if(N == 0) return 0;
        
        dp[0] = nums[0];        
		
        if(N == 1) return dp[0];     
        
        dp[1] = max(dp[0], nums[1]);        
		
        for(int i = 2; i < N; i++){
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }
        return dp[N - 1];
    }
};

