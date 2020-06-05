class Solution {
public:
    vector<int>s;
    int sum=0;
    Solution(vector<int>& w) {
        for(auto x:w)
        {
            sum+=x;
            s.push_back(sum);
        }
    }
    int pickIndex() {
        int x=rand()%sum;
        auto it=upper_bound(s.begin(),s.end(),x)-s.begin();
        return it;
    }
};
