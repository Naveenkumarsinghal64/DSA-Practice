class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int a=0,b=0,c;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                continue;
            }
            if(nums[i]<0){
                a=a+1;
            }
            else{
                b=b+1;
            }
        }
        c=max(a,b);
        return c;
    }
};