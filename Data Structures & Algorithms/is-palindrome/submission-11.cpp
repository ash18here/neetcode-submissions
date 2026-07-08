class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        int n=s.size()-1;
        for(int i=0;i<=n;i++){
            if(isalnum(s[i])){
            temp+=tolower(s[i]);
        }}
        int st=0;
        int l=temp.size()-1;
        string temp1=temp;

        while(st<l){
            swap(temp1[st++],temp1[l--]);
        }
        if(temp==temp1){
            return true;
        }
        else{
            return false;
        }

        
    }
};
