class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int d=0,c=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]!=0){
                nums[i]=nums[i]/10;
                c++;
            }
            if(c%2==0){
                d++;
                c=0;
            }
            else{
                c=0;
            }
        }
        return d;     
    }

};