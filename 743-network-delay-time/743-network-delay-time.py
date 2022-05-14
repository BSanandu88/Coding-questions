class Solution:
    def networkDelayTime(self, times: List[List[int]], N: int, K: int) -> int:
        adj = collections.defaultdict(list)
        for u, v, w in times:
            adj[u].append((v, w))
        
        heap = [(0, K)]
        seen = set()
        while heap:
            time, node = heapq.heappop(heap)
            if node in seen: continue
            seen.add(node)
            if len(seen) == N: return time
            for sib, sibtime in adj[node]:
                if sib not in seen:
                    heapq.heappush(heap, (sibtime + time, sib))
        
        return -1
        