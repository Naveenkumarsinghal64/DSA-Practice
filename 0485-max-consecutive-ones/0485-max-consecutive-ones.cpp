class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int a=0,b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                a++;
                b=max(b,a);
            }
            else{
                a=0;
            }
        }
        return b;
        
    }
};