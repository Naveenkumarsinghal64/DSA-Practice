class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0,j=0;i<mat.size();i++,j++){
            sum+=mat[i][i];
        }
        for(int i=0,j=mat[i].size()-1;j>=0;i++,j--){
            sum+=mat[i][j];
        }
        int rowfirst=0,rowlast=mat.size();
        int colfirst=0,collast=mat.size();
        int mid1=rowfirst+rowlast/2;
        int mid2=colfirst+collast/2;
        if(mat.size()%2!=0){
            sum=sum-mat[mid1][mid2];
            return sum;
        }
        return sum;
    }
};