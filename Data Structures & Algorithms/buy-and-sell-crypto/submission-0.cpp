class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprof=INT_MIN;
        
        for(int i=0; i<prices.size()-1;i++){
            for(int j=i+1; j<prices.size();j++){
                int result=prices[j]-prices[i];
                maxprof=max(maxprof,result);
            }
        }
        if(maxprof<=0) return 0;
        return maxprof;
        
        
    }
};
