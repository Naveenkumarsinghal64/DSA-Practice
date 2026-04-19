class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int a=INT_MAX,c;
        sort(nums.begin(),nums.end());
        for(int i=0;i<=nums.size()-k;i++){
            if(k==1){
                return 0;
                }
            else{
                c=abs(nums[i]-nums[i+k-1]);
                a=min(a,c);
            }  
        }
         return a;
    }    
};