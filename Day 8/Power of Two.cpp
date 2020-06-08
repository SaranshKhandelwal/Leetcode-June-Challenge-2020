class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=0;
        
        while(true)
        {
           long long int x= pow(2,i);
            if(n==x)
                return true;
            else if(x>n)
                return false;
            i++;
            
        }
        
    }
};
