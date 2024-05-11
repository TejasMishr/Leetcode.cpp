class Solution:
    def mincostToHireWorkers(self, quality: List[int], wage: List[int], k: int) -> float:
        w=[]
        ans=inf
        r=0
        for i,j in sorted(zip(quality,wage),key=lambda x:x[1]/x[0]):
            r+=i
            heappush(w,-i)
            if len(w)>k:
                r+=heappop(w)
            if len(w)==k:
                ans=min(ans,r*j/i)
        return ans