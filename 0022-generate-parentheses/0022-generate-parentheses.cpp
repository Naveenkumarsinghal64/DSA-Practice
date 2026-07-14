class Solution {
    void pawan(int n, vector<string>& arr, string ans,int o,int c){
        if(c==n){
            arr.push_back(ans);
            return ; 
        }
        if(o<n){
            pawan(n,arr,ans+"(",o+1,c);
        }
        if(c<o){
            pawan(n,arr,ans+")",o,c+1);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> arr;
        string ans="";
        int o=0, c=0;
        pawan(n,arr,ans,o,c);
        return arr;
    }
};