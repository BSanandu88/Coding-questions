class Solution:
    def removeDigit(self, number: str, digit: str) -> str:
        maxNum = "0"
        for i in range(len(number)):
            if digit == number[i]:
                maxNum = max(maxNum, number[:i] + number[i+1 :])
        return maxNum