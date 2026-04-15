class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int a=0,b=nums.size();
        for(int i=1;i<=b;i++){
            if(b%i==0){
                a=a+nums[i-1]*nums[i-1];
            }
        }
        return a;
    }
};