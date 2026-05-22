class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0,avg=INT_MIN;
        int l=0,r=0;
        while(r<nums.size()){
            sum+=nums[r];
            if((r-l+1)==k){
                avg= (sum/k)>avg?(sum/k):avg;
                sum-=nums[l];
                l++;
            }
            r++;
        }
        return avg;        
    }
};