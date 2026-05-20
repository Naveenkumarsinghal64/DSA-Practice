class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1,p=-1,q=nums.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target){
                p=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        low=0;
        high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>target){
                q=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        vector<int> N={p,q-1};
        vector<int> P={-1,-1};
        if(p!=-1 && nums[p]==target ){
            return N;
        }
        return P;
    }
};