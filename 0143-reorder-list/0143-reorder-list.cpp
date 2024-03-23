class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        st = []
        cur = head
        while cur != None:
            st.append(cur)
            cur = cur.next
            
        for i in range(len(st) // 2):
            nxt = head.next
            head.next = st.pop()
            head = head.next
            head.next = nxt
            head = head.next
            
        if head != None:
            head.next = None