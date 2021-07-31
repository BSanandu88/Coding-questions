def crowdedGroup(scores,sub,markLimit):
    subDict = {}
    for sDict in scores:
        if sDict[sub] not in subDict.keys():
            subDict[sDict[sub]] = []
            subDict[sDict[sub]].append(sDict['SeqNo'])
        else:
            subDict[sDict[sub]].append(sDict['SeqNo'])
    maxNumber,crowdedGroup_ = 0,[]
    for i in range(0,101-markLimit):
        group = []
        for m in subDict.keys():
            if i <= m <= i + markLimit:
                group.extend(subDict[m])
        if len(group) > maxNumber:
            maxNumber = len(group)
            crowdedGroup_ = [group]
        if len(group) == maxNumber and group not in crowdedGroup_:
            crowdedGroup_.append(group)
    return crowdedGroup_



sub, markLimit = input().strip().split()
markLimit = int(markLimit)
members = crowdedGroup(scores, sub, markLimit)
for m in members:
    print(*sorted(m))