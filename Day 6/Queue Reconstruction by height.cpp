bool abc(vector<int> &a,vector<int> &b)
{
    return (a[0]>b[0] || (a[0]==b[0] && a[1]<b[1]));
}


class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int i,j,n,m,k;
        sort(people.begin(),people.end(),abc);
       
        n=people.size();
        vector<vector<int>> ans;
        for(i=0;i<n;i++)
        {
                ans.insert(ans.begin()+people[i][1],people[i]);
        }
        return ans;
    }
};
