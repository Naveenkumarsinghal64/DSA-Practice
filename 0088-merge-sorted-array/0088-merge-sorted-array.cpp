class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>v1;
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                v1.push_back(nums1[i]);
                i++;
                k++;
            }
            else{
                v1.push_back(nums2[j]);
                j++;
                k++;
            }
        }
        while(i<m){
            v1.push_back(nums1[i]);
            i++;
            k++;
        }
        while(j<n){
            v1.push_back(nums2[j]);
            j++;
            k++;
        }
        nums1=v1;
    }
};