class Solution {
public:
    int numberOfBeams(vector<string>& bank) {

        // tc = 0(n);
    
        int n = bank.size();

        int prev = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {

            int curr = 0;
            for (char& ch : bank[i]) {
                if (ch == '1') {
                    curr++;
                }
            }

            ans += curr * prev;

            if (curr != 0) {
                prev = curr;
            }
        }

        return ans;
    }
};