class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int a=INT_MAX,b=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]==nums[j]&&nums[j]==nums[k]){
                        b=abs(i-j)+abs(j-k)+abs(k-i);
                        a=min(a,b);
                    }
                }
            }
        }
        if(a==INT_MAX)
        return -1;
        else
        return a;
    }
};