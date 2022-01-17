class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        dic = defaultdict()
        words = s.split(' ')
        if len(pattern) != len(words) or len(set(words)) != len(set(pattern)):
            return 0
        for i,c in enumerate(pattern):
            if c in dic:
                if dic[c] != words[i]:
                    return False
            else:
                dic[c] = words[i]
        return True
        