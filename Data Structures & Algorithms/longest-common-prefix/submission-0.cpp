class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int s=strs[0].size();
        for(int i=0;i<s;i++){
            char temp=strs[0][i];
            for(int j=0;j<strs.size();j++){
                if(i >= strs[j].size() || temp!=strs[j][i]){
                    return ans;
                }
            }
            ans+=temp;
        }
        return ans;
    }
};