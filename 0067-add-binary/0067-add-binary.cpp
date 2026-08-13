class Solution {
public:
    string addBinary(string a, string b) {
        // Pre-allocate the memory. Result can be larger than max because of the carry
        string result(max(a.size(), b.size()) + 1, '0'); 
        
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        
        // Start our write pointer at last index of the result string
        int k = result.size() - 1; 

        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry;
            // Read input strings and calc their sum
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';
            
            carry = sum / 2;
            
            result[k--] = (sum % 2) + '0'; 
        }
        
        // Remove leading zero
        if (result[0] == '0') {
            return result.substr(1);
        }
        
        return result;
    }
};