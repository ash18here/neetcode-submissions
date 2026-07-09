class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string nstr="";
        int n1=word1.size();
        int n2=word2.size();
        int i=0;
        int j=0;
        while (n1 != 0 || n2 != 0) {

                if (n1 > 0) {
                    nstr += word1[i];
                    i++;
                    n1--;
                }

                if (n2 > 0) {
                    nstr += word2[j];
                    j++;
                    n2--;
                }
                                                                            }
        
        return nstr;

        
    }
};