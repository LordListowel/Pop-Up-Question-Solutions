def is_palindrome(word:str)->bool:
    """- for a word to be a palindrome, it's first and last letters must be the same
       - The same condition must apply to its inner substrings so
         we can iterate through each of them
       - a single letter word is a palindrome
       - an empty string is a palindrome
    """
    if len(word)<=1:
        return True
    else:
        return word[0]==word[-1] and is_palindrome(word[1:-1])
        
print(is_palindrome("udeledu"))
