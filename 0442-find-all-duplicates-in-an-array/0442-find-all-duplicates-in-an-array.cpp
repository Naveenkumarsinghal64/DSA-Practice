class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            int a=abs(nums[i])-1;
            if(nums[a]<0){
                v.push_back(a+1);
            }
            else{
                nums[a]=-nums[a];
            }
        }

        return v;
    }
};