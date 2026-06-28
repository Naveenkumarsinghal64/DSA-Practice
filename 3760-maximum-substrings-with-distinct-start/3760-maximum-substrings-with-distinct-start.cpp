class Solution {
public:
    int maxDistinct(string s) {
        if(s.empty()){
            return 0;
        }
        int count=1;
        string ans;
        ans.push_back(s[0]);
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[i-1] && ans.find(s[i])==string::npos){
                count++;
                ans.push_back(s[i]);
            }
        }
        return count;
    }
};