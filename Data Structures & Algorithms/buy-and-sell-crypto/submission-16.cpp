class Solution {
    public:
        int maxProfit(vector<int>& prices) {
                if(prices.empty()){
                            return 0;
                                    }
                                            int templ=prices[0], temph=0;
                                                    for(int i=0;i<prices.size();i++){
                                                                if(templ>prices[i]){
                                                                                templ=prices[i];   // found new lower buy price
                                                                                            } else if(prices[i]-templ>temph){
                                                                                                            temph=prices[i]-templ;   // track best profit so far
                                                                                                                        }
                                                                                                                                }
                                                                                                                                        return temph;
                                                                                                                                            }
                                                                                                                                            };
;
