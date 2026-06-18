class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> ans;
        vector<vector<int>> answ(r,vector<int>(c));
        int a=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                ans.push_back(mat[i][j]);
            }
        }
        if(ans.size()!=r*c){
            return mat;
        }
        else{
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    answ[i][j]=ans[a];
                    a++;
                }
            }  
        }
        return answ;
    }
};