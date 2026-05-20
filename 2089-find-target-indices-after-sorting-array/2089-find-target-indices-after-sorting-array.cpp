class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
        int low = 0, high = nums.size() - 1;
        int p = -1, q = nums.size();
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid] >= target){
                p = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        low = 0;
        high = nums.size() - 1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid] > target){
                q = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        vector<int> N = {p, q - 1};
        vector<int> P = {};
        vector<int> Y={};
        for(int i=p;i<q;i++){
            Y.push_back(i);
        }
        if(p != -1 && p < nums.size() && nums[p] == target){
            return Y;
        }
        if(p==q-1){
         return {p};
        }
        return P;
    }
};