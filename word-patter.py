class Solution(object):
    def wordPattern(self, pattern, s):
        s=s.split(" ")
        return [pattern.index(i) for i in pattern[:]]==[s.index(j) for j in s[:]]
      
#method2
class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        s1=''
        nums=[]
        for i in range(len(s)):
            if s[i]!=' ':
                s1=s1+s[i]
            if s[i]==' ' or i==len(s)-1:
                nums.append(s1)
                s1=''
        
        setp=set(pattern)
        setnums=set(nums)
        if len(setp)!=len(setnums):
            return False
        if len(pattern)!=len(nums):
            return False
        mapdict={}
        for i in range(len(pattern)):
            if pattern[i] not in mapdict and nums[i] not in mapdict.values():
                mapdict[pattern[i]]=nums[i]
            elif pattern[i] in mapdict and mapdict[pattern[i]]==nums[i]:
                continue
            else:
                return False

        return True
        
