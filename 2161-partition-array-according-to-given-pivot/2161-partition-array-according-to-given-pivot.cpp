class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> small;
        vector<int> equal;
        vector<int> large;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                small.push_back(nums[i]);
            }
            else if(nums[i]==pivot){
                equal.push_back(nums[i]);
            }
            else{
                large.push_back(nums[i]);
            }
        }
      vector<int> ans;

    for(int x : small) ans.push_back(x);
    for(int x : equal) ans.push_back(x);
    for(int x : large) ans.push_back(x);
    return ans;

    }
};