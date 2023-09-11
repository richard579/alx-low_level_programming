0. Linear search
mandatory
Write a function that searches for a value in an array of integers using the Linear search algorithm
1. Binary search
mandatory
Write a function that searches for a value in a sorted array of integers using the Binary search algorithm
2. Big O #0
mandatory
What is the time complexity (worst case) of a linear search in an array of size n?
3. Big O #1
mandatory
What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?
4. Big O #2
mandatory
What is the time complexity (worst case) of a binary search in an array of size n?
5. Big O #3
mandatory
What is the space complexity (worst case) of a binary search in an array of size n?
6. Big O #4
mandatory
What is the space complexity of this function / algorithm?
7. Jump search
#advanced
Write a function that searches for a value in a sorted array of integers using the Jump search algorithm
8. Big O #5
#advanced
What is the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)?
9. Interpolation search
#advanced
Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm
10. Exponential search
#advanced
Write a function that searches for a value in a sorted array of integers using the Exponential search algorithm
11. Advanced binary search
#advanced
You may have noticed that the basic binary search does not necessarily return the index of the first value in the array (if this value appears more than once in the array). In this exercise, you’ll have to solve this problem.

Write a function that searches for a value in a sorted array of integers.
12. Jump search in a singly linked list
#advanced
You might think that linear search is not as effective as any other algorithm, right? Well, we should see what happens with a singly linked list.

Please define the following data structure in your search_algos.h header file:
13. Linear search in a skip list
#advanced
As you see now, looking for a specific value in a singly linked list always leads to browse every element of the list. A common way to optimize the time complexity of a search in a singly linked list is to modify the list itself by adding an “express lane” to browse it. A linked list with an express lane is called a skip list. This change does not come without consequences. Indeed, the space complexity of a search in this kind of list will grow as sizeof(skiplist_t) > sizeof(listint_t) (see example below).

Please define the following data structure in your search_algos.h header file:
14. Big O #6
#advanced
What is the time complexity (average case) of a jump search in a singly linked list of size n, using step = sqrt(n)?
15. Big O #7
#advanced
What is the time complexity (average case) of a jump search in a skip list of size n, with an express lane using step = sqrt(n)?
