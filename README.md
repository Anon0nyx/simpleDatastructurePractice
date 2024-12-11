# Data Structures

## 1. Arrays and Strings
- **Description:** Arrays are collections of elements identified by index, stored in contiguous memory locations. Strings are arrays of characters.
- **Operations:**
  - **Traversal:** \(O(n)\)
  - **Access:** \(O(1)\)
  - **Insertion/Deletion:** \(O(n)\)
- **Common Problems:** Subarray sums, sliding window, two-pointer techniques.

## 2. Linked Lists
- **Description:** A sequence of nodes where each node points to the next node. Variants include singly linked lists, doubly linked lists, and circular linked lists.
- **Operations:**
  - **Traversal:** \(O(n)\)
  - **Insertion/Deletion:** \(O(1)\) if the position is known.
- **Common Problems:** Detecting cycles, merging lists, finding the middle node.

## 3. Stacks
- **Description:** A collection of elements that follows the Last In, First Out (LIFO) principle.
- **Operations:**
  - **Push:** \(O(1)\)
  - **Pop:** \(O(1)\)
  - **Peek:** \(O(1)\)
- **Common Problems:** Valid parentheses, next greater element, infix to postfix conversion.

## 4. Queues
- **Description:** A collection of elements that follows the First In, First Out (FIFO) principle.
- **Operations:**
  - **Enqueue:** \(O(1)\)
  - **Dequeue:** \(O(1)\)
  - **Peek:** \(O(1)\)
- **Common Problems:** Implementing a queue using stacks, sliding window maximum.

## 5. Hash Tables
- **Description:** A collection of key-value pairs, where keys are hashed to find values.
- **Operations:**
  - **Insert:** \(O(1)\) average case.
  - **Delete:** \(O(1)\) average case.
  - **Search:** \(O(1)\) average case.
- **Common Problems:** Two-sum, group anagrams, longest substring without repeating characters.

## 6. Heaps
- **Description:** A specialized tree-based structure that satisfies the heap property (min-heap or max-heap).
- **Operations:**
  - **Insert:** \(O(\log n)\)
  - **Delete:** \(O(\log n)\)
  - **Peek:** \(O(1)\)
- **Common Problems:** Kth largest element, merge k sorted lists, top k frequent elements.

## 7. Trees
- **Description:** A tree data structure where each node has at most two children (left and right).
- **Operations:**
  - **Insert:** \(O(n)\) unbalanced.
  - **Delete:** \(O(n)\) unbalanced.
  - **Search:** \(O(n)\) unbalanced.
- **Common Problems:** Lowest common ancestor, binary tree level order traversal, validate BST.

## 8. Binary Search Tree (BST)
- **Description:** A binary tree where each node has a key greater than all keys in its left subtree and less than all keys in its right subtree.
- **Operations:**
  - **Insert:** \(O(\log n)\) average case.
  - **Delete:** \(O(\log n)\) average case.
  - **Search:** \(O(\log n)\) average case.
- **Common Problems:** Efficient for search, insertion, and deletion, such as in databases and file systems.

## 9. Graphs
- **Description:** A collection of nodes (vertices) and edges connecting them. Can be directed or undirected.
- **Operations:**
  - **Add Vertex:** \(O(1)\)
  - **Add Edge:** \(O(1)\)
  - **Search:** \(O(V + E)\) using BFS or DFS.
- **Common Problems:** Connected components, shortest path, cycle detection.

## 10. Tries
- **Description:** A tree-like data structure used to store a dynamic set of strings, where each node represents a character.
- **Operations:**
  - **Insert:** \(O(m)\) where \(m\) is the length of the string.
  - **Search:** \(O(m)\)
  - **Delete:** \(O(m)\)
- **Common Problems:** Word search, autocomplete, longest common prefix.

## 11. Sets
- **Description:** A collection of unique elements.
- **Operations:**
  - **Insert:** \(O(1)\) average case.
  - **Delete:** \(O(1)\) average case.
  - **Search:** \(O(1)\) average case.
- **Common Problems:** Membership testing, eliminating duplicates, mathematical set operations.

## 12. Deques (Double-Ended Queue)
- **Description:** A generalized version of a queue that allows insertion and deletion at both ends.
- **Operations:**
  - **Insert Front/Back:** \(O(1)\)
  - **Delete Front/Back:** \(O(1)\)
  - **Peek Front/Back:** \(O(1)\)
- **Common Problems:** Scenarios requiring both stack and queue operations, such as sliding window problems.

## 13. Priority Queues
- **Description:** A queue where each element has a priority, and elements are served based on priority.
- **Operations:**
  - **Insert:** \(O(\log n)\)
  - **Delete Max/Min:** \(O(\log n)\)
  - **Peek Max/Min:** \(O(1)\)
- **Common Problems:** Task scheduling, Dijkstra's algorithm, event simulation.

## 14. Van Emde Boas Tree
- **Description:** A tree data structure that implements an associative array with m-bit integer keys. It supports search, successor, predecessor, insert, and delete operations in \(O(\log \log n)\) time.
- **Operations:**
  - **Insert:** \(O(\log \log n)\)
  - **Delete:** \(O(\log \log n)\)
  - **Search:** \(O(\log \log n)\)
  - **Successor/Predecessor:** \(O(\log \log n)\)
- **Common Problems:** Efficient for operations on a dynamic set of integers with a large universe size, such as in priority queues and network routing.

# Algorithms

## 1. Sorting Algorithms
- **Types:** Quick sort, merge sort, heap sort, bubble sort, insertion sort.
- **Common Problems:** Sorting arrays, finding the kth largest element.

## 2. Searching Algorithms
- **Types:** Binary search, linear search.
- **Common Problems:** Search in a rotated sorted array, find peak element.

## 3. Greedy Algorithms
- **Concepts:** Making the locally optimal choice at each step.
- **Common Problems:** Activity selection, Huffman coding, minimum spanning tree (Kruskal's and Prim's algorithms).

## 4. Backtracking
- **Concepts:** Exploring all possible solutions by building them incrementally.
- **Common Problems:** N-queens, Sudoku solver, permutation generation.

## 5. Divide and Conquer
- **Concepts:** Breaking a problem into smaller subproblems, solving them independently, and combining their results.
- **Common Problems:** Merge sort, quick sort, closest pair of points.

## 6. Graph Algorithms
- **Concepts:** Traversal, shortest path, minimum spanning tree.
- **Common Problems:** DFS, BFS, Dijkstra's algorithm, Bellman-Ford algorithm, Floyd-Warshall algorithm.

## 7. Dynamic Programming
- **Concepts:** Breaking problems into overlapping subproblems and solving them optimally.
- **Common Problems:** Longest common subsequence, edit distance, 0/1 knapsack problem.

## 8. Bit Manipulation
- **Concepts:** Operations on binary representations of numbers.
- **Common Problems:** Single number, counting bits, power of two.
