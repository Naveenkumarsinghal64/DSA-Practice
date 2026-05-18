class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                int x=nums[i];
                int count=0;
                for(int j=0;j<nums.size();j++){
                    if(x==nums[j] && j!=i){
                        count++;
                        break;
                    }
                }
                if(count==0){
                    return nums[i];
                }
            }
        }
        return -1;
    }
};