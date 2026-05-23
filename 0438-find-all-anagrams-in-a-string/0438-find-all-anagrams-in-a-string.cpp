class Solution {
public:
    bool isAnagrams(string s, string p) {
        int n=s.size(),m=p.size();
        vector<int> v1(26),v2(26); 
        for(int i=0 ; i<n; i++) { 
            v1[s[i]-'a']++; 
            v2[p[i]-'a']++; 
            } 
        return v1==v2;
    }
     vector<int> findAnagrams(string s, string p){
        int m=p.size();
        int l=0,r=m-1;
        vector<int> v1;
        while(r<s.size()){
            if(isAnagrams(s.substr(l,m),p)){
                v1.push_back(l);
            }
            l++;
            r++;
        }
        return v1;
    }
};