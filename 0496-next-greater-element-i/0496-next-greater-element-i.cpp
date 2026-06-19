class Solution {
public:
    int q=-1;
    bool found=false;
    void findMax(vector<int> nums, int a,int b){
        found=false;
        q=-1;
        for(int i=b+1;i<nums.size();i++){
            if(nums[i]>a){
                q=nums[i];
                found=true;
                break;
            }
        }
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int a=0,b=0;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    a=nums2[j];
                    b=j;
                    findMax(nums2,a,b);
                }
            }
            if(found==true){
                nums1[i]=q;
            }
            else{
                nums1[i]=-1;
            }
        }
        return nums1;
    }
};