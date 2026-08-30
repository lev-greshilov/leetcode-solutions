class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        std::vector<int> result(friends.size());
        int j = 0;
        for (int i = 0; i < order.size(); i++) {
            if (std::binary_search(friends.begin(), friends.end(), order[i])) {
                result[j] = order[i];
                j++;
            }
        }
        return result;
    }
};