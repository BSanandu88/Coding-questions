def findMe(l):
    found = False
    for i in l:
        if i == '*':
            return True
        if type(i) == type([]):
            found = found or findMe(i)
    return found