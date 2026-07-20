class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> n;
        for(int i=0;i<nums.size();i++){
            if(n.count(nums[i])){
                return true;
            }
            n.insert(nums[i]);
            if(k<n.size()){
                n.erase(nums[i-k]);
            }
        }
        return false;
        
    }
};