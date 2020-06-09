class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        int j=0;
        if(s=="")
            return true;
        for(int i=0;i<m;i++)
        {
            if(t[i]==s[j] and j==n-1)
            {
                return true;
            }
            else if(t[i]==s[j])
            {
                j++;
            }   
        }
        return false;
        
        
    }
};
