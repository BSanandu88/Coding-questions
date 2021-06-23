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

l = [1,3,5,7]
x = 4
print(insert(x,l))