class Solution {
public:
    bool checkPerfectNumber(int num) {
        int b=0;
        for(int i=1;i<num;i++){
            if(num%i==0){
                b=b+i;
            }
        }
        if(b==num){
            return true;
        }
        else{
            return false;
        }
        
    }
};