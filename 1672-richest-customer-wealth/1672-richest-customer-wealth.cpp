class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int b=INT_MIN;
        for(int i=0;i<accounts.size();i++){
            int a=0;
            for(int j=0;j<accounts[i].size();j++){
                a=a+accounts[i][j];
            }
            b=max(a,b);
        }
        return b;
        
    }
};