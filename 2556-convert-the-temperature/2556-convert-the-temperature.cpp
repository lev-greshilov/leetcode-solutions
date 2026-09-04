class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        std::vector<double> ans(2);
        // kelvin
        ans[0] = celsius + 273.15;
        // fahrenheit
        ans[1] = celsius * 1.80 + 32.00; 

        return ans;
    }
};