# LC 125. Valid Palindrome

class Solution:
    def isPalindrome(self, s: str) -> bool:
        """
        Determines if a given string is a valid palindrome, considering only
        alphanumeric characters and ignoring case sensitivity.

        Args:
            s (str): The input string.

        Returns:
            bool: True if the string is a palindrome, False otherwise.
        """
        # Initialise two pointers
        left = 0
        right = len(s)-1
        
        # Iterate until the left and right pointers meet
        while (left < right):
            if not s[left].isalnum():
                left += 1
                continue
            if not s[right].isalnum():
                right -= 1
                continue
            if s[left].lower() != s[right].lower():
                return False
            
            left += 1
            right -= 1
        
        return True
            
