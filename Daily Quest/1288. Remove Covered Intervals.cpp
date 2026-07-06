class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intv) {
        sort(intv.begin(), intv.end());
        int ans = 0, j = 0;   
        for (int i = 1; i < intv.size(); ++i) {
            if (intv[j][0] == intv[i][0] && intv[j][1] < intv[i][1]) {
                j = i;
                ans++;
            }
            else if (intv[j][1] >= intv[i][1]) {
                ans++;
            }
            else {
                j = i;
            }
        } 
        return intv.size() - ans;
    }
};