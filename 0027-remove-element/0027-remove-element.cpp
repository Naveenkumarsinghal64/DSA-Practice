class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        while(nums.size()>j){
            nums.pop_back();
        }
        return nums.size();
        
    }
};