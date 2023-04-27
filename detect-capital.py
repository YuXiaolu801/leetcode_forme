#method1
class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        if word.isupper():return True
        if word.islower():return True
        for index in range(len(word)):
            if index!=0 and word[index].isupper():
                return False
        return True
      
      
      
      
      
#method2
class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        return word.isupper() or word.islower() or word.istitle()
