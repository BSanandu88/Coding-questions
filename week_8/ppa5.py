""" Write a function listToDict to convert a nested list (two level) into dictionary where the keys of
the dictionary be the index of the nested list.
Let l be the passed nested list and d be the returned dictionary, where l[i][j] == d[i]
[j] should return True for all valid index / key i and j .
Write a dictToList to convert a dictionary (two level) into nested list where the index of the list
be the keys of the dictionary.
Let d be the passed dictionary and l be the returned nested list, where d[i][j] == l[i]
[j] should return True for all valid index / key i and j .
The keys of the dictionaries are always an integer from 0 to 100.
0 is placed in the position where the there is no key.
The size of the list should be in a ways that accommodate all the keys in the dictionary as list
index. """

def listToDict(l):
    d={}
    for i in range(len(l)):
        d[i] = {}
        for j in range(len(l[i])):
            d[i][j] = l[i][j]
    return d

def dictToList(d):
    l=[]
    maxkeys1 = max(d.keys())
    maxkeys2 = 0
    for i in d:
        for j in d[i]:
            if j > maxkeys2:
                maxkeys2 = j
    for i in range(maxkeys1 +  1):
        l.append([])
        for j in range(maxkeys2+1):
            if i in d.keys() and j in d[i].keys():
                l[-1].append(d[i][j])
            else:
                l[-1].append(0)
    return l