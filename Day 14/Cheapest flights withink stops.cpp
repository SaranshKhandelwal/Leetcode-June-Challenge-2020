class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        int ans = INT_MAX;
        unordered_map<int, vector<pair<int, int>> > schedules;
        for(auto flight: flights)            
            schedules[flight[0]].emplace_back(flight[1], flight[2]);              
        queue<pair<int, int>> q{{{src, 0}}}; // it costs 0 to reach 'src'
        for(int step = 0; !q.empty() && step <= K+1; step++){
            for(int size = q.size(); size-->0;){
                auto [target, cost] = q.front();q.pop();                   
                if(target == dst) {
                    ans = min(ans, cost);
                    continue; //Note4:
                }
                for(auto& next: schedules[target]){   
                    if(cost + next.second > ans ) continue; 
                    if(step == K + 1 && next.first != dst) continue;
                    q.emplace(next.first, cost + next.second);                    
                }
            }
        }
        return ans==INT_MAX? -1: ans;                             
    }          
};
