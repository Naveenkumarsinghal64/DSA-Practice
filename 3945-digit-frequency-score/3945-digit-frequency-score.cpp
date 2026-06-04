class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum=0;
        int count=1;
        vector<int> v;
        while(n!=0){
            int ans=n%10;
            v.push_back(ans);
            n=n/10;
        }
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                if(v[i]==v[j]){
                    count++;
                    v.erase(v.begin()+j);
                    j--;
                }
            }
            sum=sum+(v[i]*count);
            count=1;
        }
        return sum;
        
    }
};