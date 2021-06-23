

def insert(x,l):
    out_l = []
    inserted = False
    for elem in l:
        if (not inserted ) and (elem > x):
            out_l.append(x)
            inserted = True
        out_l.append(elem)
    if (not inserted):
        out_l.append(x)
    return out_l

def isort(l):
    out_l = []
    for elem in l:
        out_l = insert(elem,out_l)
    return out_l

l = [1,4,33,12,78,90]
x = 4
print(isort(l))