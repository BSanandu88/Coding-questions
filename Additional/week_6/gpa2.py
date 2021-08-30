def freqWords(wordList):
    freq = {}
    for wd in wordList:
        for i in ',;:.!':
            while i in wd:
                wd = wd.replace(i,'')
        if wd.lower() not in freq.keys():
            freq[wd.lower()] = 0
        freq[wd.lower()] += 1
    freqWords_ = {}
    for wd in freq.keys():
        if freq[wd] not in freqWords_.keys():
            freqWords_[freq[wd]] = []
        freqWords_[freq[wd]].append(wd)
    return freqWords_

dataset = {}
dataset['malgudi'] = 'malgudi'
dataset['A Red, Red Rose'] = '''O my Luve's like a red, red rose
That’s newly sprung in June;
O my Luve's like the melodie
That’s sweetly play'd in tune.
As fair art thou, my bonnie lass,
So deep in luve am I:
And I will luve thee still, my dear,
Till a’ the seas gang dry:
Till a’ the seas gang dry, my dear,
And the rocks melt wi’ the sun:
I will luve thee still, my dear,
While the sands o’ life shall run.
And fare thee well, my only Luve
And fare thee well, a while!
And I will come again, my Luve,
Tho’ it were ten thousand mile.'''.strip().split()


dataset['Song of Myself'] = '''I celebrate myself, and sing myself,
And what I assume you shall assume,
For every atom belonging to me as good belongs to you.
I loafe and invite my soul,
I lean and loafe at my ease observing a spear of summer grass.
My tongue, every atom of my blood, form'd from this soil, this air,
Born here of parents born here from parents the same, and their
parents the same,
I, now thirty-seven years old in perfect health begin,
Hoping to cease not till death.
Creeds and schools in abeyance,
Retiring back a while sufficed at what they are, but never forgotten,
I harbor for good or bad, I permit to speak at every hazard,
Nature without check with original energy.'''.strip().split()

fw = freqWords(dataset[input().strip()])
for i in sorted(list(fw.keys())):
    print(i)
    print(*sorted(fw[i]))
    
