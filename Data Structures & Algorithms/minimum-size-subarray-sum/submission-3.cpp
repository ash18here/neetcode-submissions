class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,sum=0,n=nums.size();

        int minlen=INT_MAX;
        for(int right=0;right<n;right++){
            sum+=nums[right];
            while(target<=sum){
                minlen=min(minlen,right-left+1);
                sum-=nums[left];
                left++;
            }
        }
        return minlen==INT_MAX?0:minlen;
        
    }
};