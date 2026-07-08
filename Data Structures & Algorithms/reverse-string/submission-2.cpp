class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0;
        int l=s.size()-1;
        char temp;
        while(st<=l){
            temp=s[st];
            s[st]=s[l];
            s[l]=temp;
            st++;
            l--;
            

        }


        
    }
};