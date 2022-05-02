class Solution:
    def removeDigit(self, number: str, digit: str) -> str:
        last, n = 0, len(number)
        for i in range(n):
            if digit == number[i]:
                last = i
                if i < n - 1 and digit < number[i + 1]:
                    break
        return number[:last] + number[last + 1 :]
        