class Solution:
    def getHint(self, secret: str, guess: str) -> str:
        countA = countB = 0
        dic = defaultdict(int)
        # store the secret to dic and calculate countA
        for i in range(len(secret)):
            if secret[i] == guess[i]:
                countA += 1
            dic[secret[i]] += 1
        # compare the guess with the secret and calculate countB
        for c in guess:
            if c in dic and dic[c] > 0:
                dic[c] -= 1
                countB += 1
        # don't forget to minus countA
        countB -= countA
        return str(countA) + "A" + str(countB) + "B"
        