class Solution:
    def validMountainArray(self, arr: List[int]) -> bool:
        n = len(arr)
        if n < 3 or arr[0] > arr[1] or arr[-1] > arr[-2]:
            return False
        i = 1
        while(arr[i] > arr[i - 1]):
            i += 1
        while i < n and arr[i - 1] > arr[i]:
            i += 1
        return i == n
        