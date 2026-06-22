class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0,maxCount=0;
        for(int i=0;i<s.size();i++){
            string ans="";
            for(int j=i;j<s.size();j++){
                if(i==j){
                    if(ans.find(s[i])==string::npos){
                        ans.push_back(s[i]);
                        count++;
                    }
                    else{
                        break;
                    }
                }
                else{
                    if(ans.find(s[j])==string::npos){
                    ans.push_back(s[j]);
                    count++;
                }
                else{
                    break;
                }
                }
            }
            maxCount=max(maxCount,count);
            count=0;
        }
        return maxCount;
    }
};