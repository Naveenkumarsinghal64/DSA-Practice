class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1,mid=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[low]<=nums[mid]){
                if(mid<high && nums[mid]>nums[mid+1]){
                    return nums[mid+1];
                }
                else{
                    low=mid+1;
                }
            }    
            else{
                if(nums[mid]<nums[mid-1]){
                    return nums[mid];
                }
                else{
                    high=mid-1;
                }
            }    
        }
        
        return nums[mid];
    }
};