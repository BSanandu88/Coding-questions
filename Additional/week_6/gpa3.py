def adjMat(scores,sub):
    adj = {}
    for mentor in scores:
        adj[mentor['SeqNo']] = {}
        for mentored in scores:
            if 10 <= mentor[sub] - mentored[sub] <= 20 and mentor['SeqNo'] != mentored['SeqNo']:
                adj[mentor['SeqNo']][mentored['SeqNo']] = 1
    return adj

def topMentors(scores,sub):
    adj = adjMat(scores,sub)
    topMentors_ = {}
    maxMentored = 0
    for i in adj.keys():
        if len(adj[i]) > maxMentored:
            maxMentored = len(adj[i])
            topMentors_ = {}
            topMentors_[i] = list(adj[i].keys())
        if len(adj[i]) == maxMentored:
            topMentors_[i] = list(adj[i].keys())
    return topMentors_
    