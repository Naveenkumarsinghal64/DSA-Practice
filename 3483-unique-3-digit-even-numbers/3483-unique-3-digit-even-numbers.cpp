class Solution {
public:
    int totalNumbers(vector<int>& digits) {
     int count=0;
     int n=digits.size();
     vector<int> ans;
     for(int i=0;i<n;i++){
        if(digits[i]==0) continue;
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(i!=j&&j!=k&&k!=i){
                    int a=digits[i];
                    int b=digits[j];
                    int c=digits[k];
                    int q=a*100+b*10+c;
                    if(q%2==0){
                        ans.push_back(q);
                    }
                }
            }
        }
     }
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans.size();
    }
};