class Solution:
    def maxScoreWords(self, words: List[str], letters: List[str], score: List[int]) -> int:
        ctr = Counter(letters)
        def recursion(ind, mp):
            if ind == len(words):
                return 0
            word, mp1, sc = words[ind], copy.deepcopy(mp), 0
            for a in word:
                if a in mp1 and mp1[a]>0:
                    mp1[a]-=1
                    sc+=score[ord(a)-ord('a')]
                else:
                    return recursion(ind+1, mp)
            return max(sc+recursion(ind+1, mp1), recursion(ind+1, mp))
        return recursion(0, ctr)