# Top 20 Linked List Questions with Algorithms

## 1. Reverse a Linked List

**Algorithm:** - Initialize `prev = nullptr`, `curr = head`. - Loop
until `curr` is null: - Store `next = curr->next` - Reverse pointer:
`curr->next = prev` - Move `prev = curr`, `curr = next` - Return `prev`
as new head.

## 2. Reverse a Linked List (Recursive)

**Algorithm:** - Base case: if `head == nullptr` or
`head->next == nullptr`, return head. - Recursively reverse rest list. -
Set `head->next->next = head`, `head->next = nullptr`. - Return new
head.

## 3. Find Middle of Linked List

**Algorithm:** - Use `slow` and `fast` pointers. - Move slow by 1, fast
by 2. - When fast reaches end, slow is at middle.

## 4. Detect Loop in Linked List

**Algorithm:** - Use Floyd's cycle detection. - Move slow (1 step), fast
(2 steps). - If they meet, loop exists.

## 5. Remove Loop in Linked List

**Algorithm:** - Detect loop using Floyd. - Reset one pointer to head. -
Move both by 1 step. - Meeting point is loop start. - Break loop.

## 6. Merge Two Sorted Linked Lists

**Algorithm:** - Use dummy node. - Compare heads of both lists. - Attach
smaller node to result. - Continue until both finish.

## 7. Check if Linked List is Palindrome

**Algorithm:** - Find middle. - Reverse second half. - Compare first and
second halves.

## 8. Delete Nth Node from End

**Algorithm:** - Use two pointers. - Move fast `n` steps. - Move slow
and fast together until fast hits end. - Delete slow-\>next.

## 9. Find Intersection of Two Linked Lists

**Algorithm:** - Use two pointers A and B. - Move A to B's head when
null. - Move B to A's head when null. - Meeting point is intersection.

## 10. Remove Duplicates from Sorted List

**Algorithm:** - Traverse list. - If current-\>data == next-\>data,
delete next. - Else move forward.

## 11. Remove Duplicates from Unsorted List

**Algorithm:** - Use hash set. - Track visited values. - Delete
duplicates.

## 12. Add Two Numbers (Linked List)

**Algorithm:** - Maintain carry. - Traverse both lists. - Add digits +
carry. - Create new node.

## 13. Rotate Linked List by k

**Algorithm:** - Find length. - Make list circular. - Break circle at
(len-k%len).

## 14. Sort Linked List (Merge Sort)

**Algorithm:** - Find middle. - Recursively sort both halves. - Merge
sorted halves.

## 15. Reverse Nodes in Groups of k

**Algorithm:** - Reverse first k nodes. - Recursively call for remaining
list. - Connect both parts.

## 16. Find Length of Loop

**Algorithm:** - Detect loop. - From meeting point, move pointer until
it returns. - Count steps.

## 17. Segregate Even and Odd Nodes

**Algorithm:** - Maintain even and odd lists. - Attach nodes
accordingly. - Combine both lists.

## 18. Delete Nodes with Given Value

**Algorithm:** - Handle head values separately. - Traverse and delete
matching nodes.

## 19. Clone Linked List with Random Pointer

**Algorithm:** - Insert cloned nodes between originals. - Fix random
pointers. - Separate both lists.

## 20. Reorder Linked List

**Algorithm:** - Find middle. - Reverse second half. - Merge both halves
alternately.
