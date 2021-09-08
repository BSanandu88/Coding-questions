

def Find_Min_Difference(L,P):
    L.sort()
    ans = 10 ** 20
    for i in range(len(L) - P + 1):
        ans = int(min(ans,L[i + P - 1] - L[i]))
    return ans 

L = [3,4,1,9,56,7,9,12,13]
# 1,3,4,7,9,9,12,13,56
P = 5
print(Find_Min_Difference(L,P))