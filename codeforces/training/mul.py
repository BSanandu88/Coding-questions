import math,itertools
s = input()
n = list(s[:])
ans = []
for k in itertools.permutations(n,len(s)):
    for i in range(1,len(k) - 1):
        value1 = ''.join(list(k[:i]))
        value2 = ''.join(list(k[i:]))
        res = int(value1) * int(value2)
        ans.append(res)
print(max(ans))