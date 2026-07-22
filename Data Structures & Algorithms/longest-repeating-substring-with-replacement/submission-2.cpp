class Solution {
public:
    int characterReplacement(string s, int k) {
        int res=0;
        int maxf=0;
        unordered_map<char,int> c;
        int l=0;
        for(int i=0;i<s.size();i++){
            c[s[i]]++;
            maxf=max(maxf,c[s[i]]);
             while(((i-l+1)-maxf)>k){
                c[s[l]]--;
                l++;
             }
        res=max(res,i-l+1);


        }
        return res;
    
//yr tikhi chutneys hoti mja ajta
        
    }
};
