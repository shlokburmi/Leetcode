class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxCost = 0;
        for (int cost : costs) {
            maxCost = max(maxCost, cost);
        }

        vector<int> count(maxCost + 1, 0);

        for (int cost : costs) {
            count[cost]++;
        }

        int ans = 0;

        for (int price = 1; price <= maxCost; price++) {
            while (count[price] > 0 && coins >= price) {
                coins -= price;
                count[price]--;
                ans++;
            }
        }

        return ans;
    }
};