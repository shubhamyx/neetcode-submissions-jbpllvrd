class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int ans = r;

        while(l <= r) {
            int mid = (l + r) / 2;
            long long hours = 0;

            for(int i = 0; i < piles.size(); i++) {
                hours += (piles[i] + mid - 1) / mid;
            }

            if(hours <= h) {
                ans = mid;
                r = mid - 1; // try smaller speed
            } else {
                l = mid + 1; // need more speed
            }
        }

        return ans;
    }
};