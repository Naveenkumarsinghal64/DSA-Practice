class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum=0,a=INT_MIN;
         for(int i=0;i<nums.size();i++){
            a=max(a,nums[i]);}
        while(k>0){
            sum=sum+a;
            a++;
            k--;
        }
        
        return sum;
    }
};