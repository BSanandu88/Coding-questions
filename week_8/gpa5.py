# Problem 5

def trending(subject_topics):
    common_topics = set(subject_topics[0])
    for topics in subject_topics:
        common_topics = common_topics.union(set(topics))
    common_topics_list = list(common_topics)
    common_topics_count = {}
    for topic in common_topics_list:
        common_topics_count[topic] = 0
        for topics in subject_topics:
            if topic in topics:
                common_topics_count[topic] += 1
    top_count = max(common_topics_count.values())
    top_topics = []
    for key,value in common_topics_count.items():
        if value == top_count:
            top_topics.append(key)

    bottom_count = min(common_topics_count.values())
    bottom_topics = []
    for key,value in common_topics_count.items():
        if value == bottom_count:
            bottom_topics.append(key)
    return len(top_topics),len(bottom_topics)
