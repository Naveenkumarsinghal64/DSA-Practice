class Solution {
public:
    int minElement(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            int sum=0;
            while(nums[i]!=0){
                sum=sum+nums[i]%10;
                nums[i]=nums[i]/10;
            }
            nums[i]=sum;
        }
        int min=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<min){
                min=nums[i];
            }
        }
        return min;
        
    }
};