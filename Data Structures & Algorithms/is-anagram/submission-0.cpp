class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>freq;
        map<char,int>freq1;
        int s1=s.size();
        int s2=t.size();
        if(s1!=s2){
            return false;
        }
        for(char ch:s){
freq[ch]++;

                 

            
        }
        for(char ch:t){
            freq1[ch]++;
        }
        for (auto& [key, val] : freq) {
                if (freq1.count(key) && freq1[key] == val)
                        cout << key << " has same value" << endl;
                        
                else{
                    return false;
                }
        }
        return true;
    
                
        }
        
};
