class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int c=gain[0];
        for(int i=1;i<gain.size();i++){
            gain[i]=gain[i]+gain[i-1];
            c=max(c,gain[i]);
        }
        if(c<0){
            return 0;
        }
        return c;
    }
};