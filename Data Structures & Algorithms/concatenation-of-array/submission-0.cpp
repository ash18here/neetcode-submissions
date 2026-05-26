class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int a=nums.size();
        vector<int>ans(2 * a);
        int n=0;
        for(int i=0;i<2;i++){
            for(int j=0;j<a;j++){
                ans[n+j]=nums[j];





            }
            n=a;
        }
        return ans;
        
    }
};