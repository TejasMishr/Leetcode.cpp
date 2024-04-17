class Solution(object):
    smallest_string =None
    def dfs(self,node,s):
        if node is None: return
        s += chr(node.val + ord('a'))
        if node.left is None and node.right is None:
            s_reversed =  s[::-1]
            if self.smallest_string == "": self.smallest_string = s_reversed
            else: self.smallest_string = min(self.smallest_string, s_reversed) 
        self.dfs(node.left,s)
        self.dfs(node.right,s)  

    def smallestFromLeaf(self, root): 
        self.smallest_string = ""
        s =""
        self.dfs(root,s)
        return self.smallest_string