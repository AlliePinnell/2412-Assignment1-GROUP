# Time Complexities

## Q2 – Singly Linked List (Reverse)

- Linear – Θ(n), through an **iteration** approach
- Each function walks through the linked list once using a while loop. Whether inserting, printing, or reversing, the number of steps grows directly with the number of nodes.

---

## Q3 – Merge Sorted Linked Lists

- Linear – Θ(n^2), through an **iteration** approach
- Building and merging the lists relies on while loops that traverse nodes one by one. For each element, the loop searches for the correct sorted position, scaling linearly with the list size.

---

## Q4 – Recursive Factorial

- Linear – Θ(n), through a **recursion** approach
- The function calls itself once per decrement of n until it reaches the base case. This produces exactly n recursive calls, so the work scales linearly with n.

---

## Q5 – Recursive Fibonacci

- Exponential – Θ(2^n), through a **recursion** approach
- Each call branches into two further calls, and this doubling happens at every level of recursion. The total number of calls grows exponentially with n.

---

## Q6 – Singly Linked List (Sum, Search, Insert, Output)

- Linear – Θ(n), through both **recursion** and **iteration** approaches
- `Sum` and `Search` use recursion, calling themselves once per node until the base case, producing n calls. `insertNode` and `outputSinglyLinkedList` use iteration, looping through each node once. Either way, the work scales linearly with the number of nodes.

---

## Q7 – Balanced Parentheses (Stack)

- Linear – Θ(n), through an **iteration** approach
- A for loop processes each character in the string exactly once. The stack push and pop operations within the loop are each constant-time, so the overall work grows linearly with the string length.

---

## Q8 – Stack Implementations (Array vs Linked List)

- Push/Pop: Constant – Θ(1)
- Both the linked list and array stack implementations insert and remove from the top in a single step, with no loops or traversals needed.
- `outputSinglyLinkedList`: Linear – Θ(n), through an **iteration** approach — it walks through every node once.

---

## Q9 – Palindrome Check (Doubly Linked List)

- Linear – Θ(n), through an **iteration** approach
- The function uses a while loop to walk inward from both the head and tail of the doubly linked list, comparing one pair of nodes per step. The number of comparisons scales linearly with the list length.

---

## Q10 – Circular Queue

- `enqueue`, `getFront`, `isEmpty`: Constant – Θ(1) — each performs a single index operation or check with no loops.
- `dequeue`, `isFull`, `countItems`: Linear – Θ(n), through an **iteration** approach — each contains a for loop that iterates over the array elements, so the work grows with the queue size.
