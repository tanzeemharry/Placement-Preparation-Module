class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=0,ans=INT_MIN;
        
        for(auto it:nums)
        {
            curr+=it;
            ans=max(ans,curr);
            
            if(curr<0)
                curr=0;
        }
        return ans;
        
    }
};