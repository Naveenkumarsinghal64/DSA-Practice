class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;
        int n=digits.size();
        for(int i=0;i<n;i++){
            if (digits[i] == 0) continue; 
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i!=j&&j!=k&&k!=i){
                        int a=digits[i]*100+digits[j]*10+digits[k];
                    if(a%2==0) ans.push_back(a);
                    }
                }
            }
        }
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};