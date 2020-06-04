class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        int N= costs.size();
        vector<int>v;
        int ans=0;
        for(int i=0;i<N;i++)
        {
            ans += costs[i][0]+ costs[i][1];
            v.push_back(costs[i][0]- costs[i][1]);
        }
        
        sort(v.begin(),v.end());
        
        for(int i=0;i<N/2;i++)
            ans+=v[i];
        for(int i=N/2;i<N;i++)
            ans-=v[i];
        
        return ans/2;
        
    
    }
};
