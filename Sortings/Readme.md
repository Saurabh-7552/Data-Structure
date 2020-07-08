##Sorting and Searching

# Bubble Sorting
  Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps through the list,
  compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list
  is sorted. The algorithm, which is a comparison sort, is named for the way smaller or larger elements "bubble" to the top of the list.
  This simple algorithm performs poorly in real world use and is used primarily as an educational tool.

  Worst-case performance	    O(n^{2}) comparisons,  O(n^{2}) swaps
  Best-case performance	        O(n) comparisons,      O(1) swaps
  Average performance	        O(n^{2}) comparisons,  O(n^{2}) swaps
  Worst-case space complexity	O(n) total,            O(1) auxiliary

#Insertion Sorting
 Insertion sort is a simple sorting algorithm that builds the final sorted array (or list) one item at a time. It is much less efficient on
 large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, insertion sort provides several advantages:

 Simple implementation: Jon Bentley shows a three-line C version, and a five-line optimized version
 Efficient for (quite) small data sets, much like other quadratic sorting algorithms
 More efficient in practice than most other simple quadratic (i.e., O(n2)) algorithms such as selection sort or bubble sort
 Adaptive, i.e., efficient for data sets that are already substantially sorted: the time complexity is O(kn) when each element in the input is 
 no more than k places away from its sorted position
 Stable; i.e., does not change the relative order of elements with equal keys
 In-place; i.e., only requires a constant amount O(1) of additional memory space
 Online; i.e., can sort a list as it receives it
 When people manually sort cards in a bridge hand, most use a method that is similar to insertion sort.

  Worst-case performance	    О(n2) comparisons and swaps
  Best-case performance	        O(n) comparisons, O(1) swaps
  Average performance	        О(n2) comparisons and swaps
  Worst-case space complexity	О(n) total, O(1) auxiliary

#Selection Sorting
 In computer science, selection sort is an in-place comparison sorting algorithm. It has an O(n2) time complexity, which makes it inefficient
 on large lists, and generally performs worse than the similar insertion sort. Selection sort is noted for its simplicity and has performance
 advantages over more complicated algorithms in certain situations, particularly where auxiliary memory is limited.

The algorithm divides the input list into two parts: a sorted sublist of items which is built up from left to right at the front (left) of the
list and a sublist of the remaining unsorted items that occupy the rest of the list. Initially, the sorted sublist is empty and the unsorted
sublist is the entire input list. The algorithm proceeds by finding the smallest (or largest, depending on sorting order) element in the unsorted
sublist, exchanging (swapping) it with the leftmost unsorted element (putting it in sorted order), and moving the sublist boundaries one element to the right.

The time efficiency of selection sort is quadratic, so there are a number of sorting techniques which have better time complexity than selection sort.
One thing which distinguishes selection sort from other sorting algorithms is that it makes the minimum possible number of swaps, n − 1 in the worst case.

 Worst-case performance	        О(n2) comparisons, О(n) swaps
 Best-case performance	        О(n2) comparisons, O(1) swaps
 Average performance	        О(n2) comparisons, О(n) swaps
 Worst-case space complexity	O(1) auxiliary

#Quick Sorting
  Quicksort (sometimes called partition-exchange sort) is an efficient sorting algorithm. Developed by British computer scientist Tony Hoare in 1959 and published
  in 1961, it is still a commonly used algorithm for sorting. When implemented well, it can be about two or three times faster than its main competitors, merge sort
  and heapsort.

  Quicksort is a divide-and-conquer algorithm. It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according
  to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively. This can be done in-place, requiring small additional amounts of
  memory to perform the sorting.

  Quicksort is a comparison sort, meaning that it can sort items of any type for which a "less-than" relation (formally, a total order) is defined. Efficient
  implementations of Quicksort are not a stable sort, meaning that the relative order of equal sort items is not preserved.

  Mathematical analysis of quicksort shows that, on average, the algorithm takes O(n log n) comparisons to sort n items. In the worst case, it makes O(n2) comparisons,
  though this behavior is rare.

  Worst-case performance	    O(n2)
  Best-case performance	        O(n log n) (simple partition) or O(n) (three-way partition and equal keys)
  Average performance	        O(n log n)
  Worst-case space complexity	O(n) auxiliary (naive) O(log n) auxiliary (Sedgewick 1978)
#Merge Sorting
 In computer science, merge sort (also commonly spelled mergesort) is an efficient, general-purpose, comparison-based sorting algorithm. Most implementations
 produce a stable sort, which means that the order of equal elements is the same in the input and output. Merge sort is a divide and conquer algorithm that
 was invented by John von Neumann in 1945. A detailed description and analysis of bottom-up mergesort appeared in a report by Goldstine and von Neumann
 as early as 1948.

 Conceptually, a merge sort works as follows:

 1. Divide the unsorted list into n sublists, each containing one element (a list of one element is considered sorted).
 2. Repeatedly merge sublists to produce new sorted sublists until there is only one sublist remaining. This will be the sorted list.

 Worst-case performance	        O(n log n)
 Best-case performance	        O(n log n) typical, O(n) natural variant
 Average performance	        O(n log n)
 Worst-case space complexity	О(n) total with O(n) auxiliary, O(1) auxiliary with linked lists
 
#Binary Searching
 In computer science, binary search, also known as half-interval search, logarithmic search, or binary chop, is a search algorithm that finds the position of a target
 value within a sorted array. Binary search compares the target value to the middle element of the array. If they are not equal, the half in which the target cannot
 lie is eliminated and the search continues on the remaining half, again taking the middle element to compare to the target value, and repeating this until the target 
 value is found. If the search ends with the remaining half being empty, the target is not in the array.

 Binary search runs in logarithmic time in the worst case, making O(log n) comparisons, where n is the number of elements in the array, the O is Big O notation, and log  
 is the logarithm. Binary search is faster than linear search except for small arrays. However, the array must be sorted first to be able to apply binary search. 
 There are specialized data structures designed for fast searching, such as hash tables, that can be searched more efficiently than binary search. However, binary 
 search can be used to solve a wider range of problems, such as finding the next-smallest or next-largest element in the array relative to the target even if it is
 absent from the array.

 There are numerous variations of binary search. In particular, fractional cascading speeds up binary searches for the same value in multiple arrays. Fractional cascading 
 efficiently solves a number of search problems in computational geometry and in numerous other fields. Exponential search extends binary search to unbounded lists. The 
 binary search tree and B-tree data structures are based on binary search. 
 
 Worst-case performance	         O(log n)
 Best-case performance	         O(1)
 Average performance	         O(log n)
 Worst-case space complexity	 O(1)