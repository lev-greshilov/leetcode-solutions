class Solution:
    def isPalindrome(self, s: str) -> bool:
        cleaned_phrase = ''.join(filter(str.isalnum, s)).lower()
        return cleaned_phrase == cleaned_phrase[::-1]