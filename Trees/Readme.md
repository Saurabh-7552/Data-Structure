# Trees
 A binary search tree is a rooted binary tree, whose internal nodes each store a key (and optionally, an associated value), and each has two 
 distinguished sub-trees, commonly denoted left and right. The tree additionally satisfies the binary search property: the key in each node 
 is greater than or equal to any key stored in the left sub-tree, and less than or equal to any key stored in the right sub-tree. The leaves 
 (final nodes) of the tree contain no key and have no structure to distinguish them from one another.

Often, the information represented by each node is a record rather than a single data element. However, for sequencing purposes, nodes are 
compared according to their keys rather than any part of their associated records. The major advantage of binary search trees over other data 
structures is that the related sorting algorithms and search algorithms such as in-order traversal can be very efficient; they are also easy to 
code.

Binary search trees are a fundamental data structure used to construct more abstract data structures such as sets, multisets, and associative arrays.

When inserting or searching for an element in a binary search tree, the key of each visited node has to be compared with the key of the element to be
 inserted or found.
 
- The shape of the binary search tree depends entirely on the order of insertions and deletions and can become degenerate.
- After a long intermixed sequence of random insertion and deletion, the expected height of the tree approaches square root of the number of keys, √n,
  which grows much faster than log n.
- There has been a lot of research to prevent degeneration of the tree resulting in worst case time complexity of O(n) (for details see section Types).
  
  Note:
  1. Inorder traversal is always sorted.
  2. To draw a binary tree we need either postorder or preorder traversals.
  3. Worst case of Insertion and Deletion is of order O(n).
