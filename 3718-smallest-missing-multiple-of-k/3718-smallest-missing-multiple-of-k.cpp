class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int x=k;
        for(int i=0;i<nums.size();i++){
             if(nums[i]==k){
                    k=k+x;
                    i=-1;
                }
               
       }
      return k;
    }
};