class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums.size();
        for(int i=0;i<a-1;i++){
            if(nums[i]==nums[i+1]){
            return true;}
        }
return false;

        
    }
};