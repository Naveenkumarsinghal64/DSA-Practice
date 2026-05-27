class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++) {

            int num = nums[i];
            vector<int> temp;

            for( ; num > 0; num = num / 10) {
                temp.push_back(num % 10);
            }

            reverse(temp.begin(), temp.end());

            for(int j = 0; j < temp.size(); j++) {
                ans.push_back(temp[j]);
            }
        }

        return ans;
    }
};