n,m = map(int, input().split())

a = [input() for i in range(n * 2)]

for i in range(m):
    #rank = sorted(rank.items(), key = lambda x:x[1], reverse = True)
    if a[i][i] == "G" and a[i + 1][i] == "P":
        rank[i + 2] += 1
    elif a[i][i] == "G" and a[i + 1][i] == "C":
        rank[i + 1] += 1
    elif a[i][i] == "C" and a[i + 1][i] == "G":
        rank[i + 2] += 1
    elif a[i][i] == "C" and a[i + 1][i] == "P":
        rank[i + 1] += 1
    elif a[i][i] == "P" and a[i + 1][i] == "G":
        rank[i + 1] +=  1
    elif a[i][i] == "P" and a[i + 1][i] == "C":
        rank[i + 2] += 1
    print(rank)