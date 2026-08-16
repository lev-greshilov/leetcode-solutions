class Solution:
    def romanToInt(self, s: str) -> int:
        roman_to_arabic = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        total = 0
        for i in range(len(s) - 1):
            if roman_to_arabic[s[i]] < roman_to_arabic[s[i+1]]:
                total -= roman_to_arabic[s[i]]
            else:
                total += roman_to_arabic[s[i]]
        # always add the last element
        total += roman_to_arabic[s[-1]]
        return total  