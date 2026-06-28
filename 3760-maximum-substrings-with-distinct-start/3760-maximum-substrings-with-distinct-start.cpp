class Solution {
public:
    int maxDistinct(string s) {
     sort(s.begin(),s.end());
     if(s.empty()){
        return 0;
     }   
     int count=1;
     for(int i=1;i<s.size();i++){
        if(s[i]!=s[i-1]){
            count++;
        }
     }
     return count;
    }
};