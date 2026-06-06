class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        vector<int> v;
        int count=0;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int digit=0;
            while(a!=0){
                digit=a%10;
                v.push_back(digit);
                a=a/10;
            }    
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==digit){
                count++;
            }   
        }
        return count;
    }
};