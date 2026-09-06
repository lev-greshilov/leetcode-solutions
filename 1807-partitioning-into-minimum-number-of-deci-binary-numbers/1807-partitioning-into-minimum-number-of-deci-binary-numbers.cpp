class Solution {
public:
    int minPartitions(string n) {
        char max_char = *std::max_element(n.begin(), n.end());
        return max_char - '0';
    }
};
