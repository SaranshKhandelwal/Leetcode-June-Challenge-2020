class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) 
    {
        if(nums.size()<=1)
            return nums;
        sort(nums.begin(), nums.end());
        vector<int> dp(nums.size(), 1);
        vector<int> ans;
        vector<int> parent(nums.size());
        parent[0] = 0;
        int countMax=1;
        int ansIndex = 0;
        for(int i=1; i<nums.size(); i++)
        {
            int val=0;
            int num = nums[i];
            parent[i] = i;
            for(int j=0; j<i; j++)
            {
                if(num%nums[j]==0)
                {
                    if(val<dp[j])
                    {
                        val = dp[j];
                        parent[i] = j;
                        if(countMax < val+1)
                        {
                            countMax = val+1;
                            ansIndex = i;
                        }
                    }
                }
            }
            dp[i] = val+1;
        }
        for(auto i:dp){
            cout<<i<<endl;
        }
        for(int i=0; i< countMax; i++)
        {
            ans.push_back(nums[ansIndex]);
            ansIndex = parent[ansIndex];
        }
        return ans;
        
    }
};
