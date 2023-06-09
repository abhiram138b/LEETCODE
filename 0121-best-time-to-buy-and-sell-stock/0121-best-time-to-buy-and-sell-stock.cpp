class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = 10001;
        int maxi = 0;
        for(auto it : prices){
            mini = min(mini, it);
            maxi = max(maxi, it - mini);
        }
        return maxi;
    }
};