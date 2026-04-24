class Solution {
public:
    int countLargestGroup(int n) {
        int freq[40] = {0};
        for (int i = 1; i <= n; i++) {
            int x = i, sum = 0;
            while (x > 0) {
                sum += x % 10;
                x /= 10;
            }
            freq[sum]++;
        }
        int maxi = 0;
        for (int i = 0; i < 40; i++) {
            if (freq[i] > maxi) maxi = freq[i];
        }
        int count = 0;
        for (int i = 0; i < 40; i++) {
            if (freq[i] == maxi) count++;
        }
        return count;
    }
};