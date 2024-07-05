## Amazon Efficiency: Data Structures and Algorithms in Action
<dl>
<dt>Course Name</dt>
<dd>Algorithmic Problem Solving</dd>
<dt>Course Code</dt>
<dd>23ECSE309</dd>
<dt>Name</dt>
<dd>Varuni Desai </dd>
<dt>Course Instructor</dt>
<dd>Prakash Hegade</dd>
<dt>University</dt>
<dd>KLE Technological University, Hubballi-31</dd>
</dl>

<br><br>
> Revolutionizing E-Commerce with Intelligent Data Structures and Algorithms
>
> Varuni

<br>
   
## Introduction:
Through the prism of data structures and algorithms, this portfolio project explores the various functionalities offered by Amazon. The goal of the project is to provide novel solutions that optimise many facets of Amazon's operations, with an emphasis on practical business use cases. We'll look at how Amazon's ecosystem may innovate and become more efficient through the strategic use of data structures and algorithms, from improving recommendation systems to optimising transportation and inventory control. Come explore the revolutionary possibilities of these ideas as we show you how to improve consumer satisfaction and performance in the e-commerce space.

## Functionalities:
This repository contains examples and implementations showing how to use and integrate Amazon services efficiently.


1. DFS : Graph traversal algorithms for exploring or searching through graph or tree structures, used recommendation systems.[View code here]( https://github.com/Varuni387/Amazon.github.io/blob/main/Codes/dfs.cpp){:target="_blank"}<br><br>
The time complexity of Depth First Search (DFS) algorithm is O(V + E), where V is the number of vertices and E is the number of edges in the graph. This is because in the worst case scenario, the algorithm may visit all vertices and edges of the graph.

The space complexity of DFS is O(V), where V is the number of vertices in the graph. This is because the algorithm uses a boolean array to keep track of visited vertices, which requires O(V) space.
3. Dijakstra's algorithm: Graph algorithm to find shortest path between nodes in a weighted graph. [View code here]( https://github.com/Varuni387/Amazon.github.io/blob/main/Codes/dijakstra.cpp){:target="_blank"}<br><br>
The time complexity of Dijkstra's algorithm is O((V+E)logV), where V is the number of vertices and E is the number of edges in the graph. This is because in the worst case scenario, all vertices and edges need to be processed. The logV factor comes from the priority queue operations.

The space complexity of Dijkstra's algorithm is O(V), where V is the number of vertices in the graph. This is because we are storing the distances of each vertex from the source vertex in the dist array, which has a size equal to the number of vertices.
3. Red-black trees : This binary search trees are self-balancing inorder to make CRUD operations more optimistic. Managing amazon accounts can be one application. [View code here]( https://github.com/Varuni387/Amazon.github.io/blob/main/Codes/redBlack.cpp){:target="_blank"}<br><br>
The time complexity of operations on a red-black tree is O(log n), where n is the number of nodes in the tree. This is because red-black trees are balanced binary search trees, which ensures that the height of the tree is kept logarithmic in relation to the number of nodes. This balanced property allows for efficient search, insertion, and deletion operations.

The space complexity of a red-black tree is O(n), where n is the number of nodes in the tree. This is because each node in the tree requires a constant amount of memory to store its key, value, color, and pointers to its children. The space complexity is linear in relation to the number of nodes in the tree.
4. Fenwick tree of sum query: This kind of tree is used to fetch sum between range of queries. We can fetch number of orders in the given span by one account (or) from single destination. [View code here]( https://github.com/Varuni387/Amazon.github.io/blob/main/Codes/fenwick.cpp){:target="_blank"}<br><br>
The time complexity of a Fenwick tree is O(log n) for both update and query operations. This is because the tree structure allows for efficient updates and queries by only traversing a logarithmic number of nodes.

The space complexity of a Fenwick tree is O(n) where n is the number of elements in the input array. This is because the tree requires an array of size n+1 to store the prefix sums.
5. Trie : Tries are an application of tree data structure usually used to retrive the keys. [View code here]( https://github.com/Varuni387/Amazon.github.io/blob/main/Codes/trie.cpp){:target="_blank"}<br><br>
The time complexity of a trie data structure is O(m) for both insertion and search operations, where m is the length of the key being inserted or searched for. This is because each character in the key needs to be processed one by one in order to traverse the trie.

The space complexity of a trie is O(n*m), where n is the number of keys in the trie and m is the average length of the keys. This is because each node in the trie represents a character in the key, and there can be up to m nodes for each key.
6. Travelling Salesman Problem : This is the optimization problem to reach to every city exactly once and return back to the origin city. Collection and delivery of items from multiple sources and destinations. [View code here]( https://github.com/Varuni387/Amazon.github.io/blob/main/Codes/travellingSP.cpp){:target="_blank"}<br><br>
The time complexity of the travelling salesman problem is O(n!), where n is the number of cities that the salesman needs to visit. This is because the number of possible routes that the salesman can take grows factorially with the number of cities. 

The space complexity of the travelling salesman problem is O(n^2), as it requires storing a matrix of distances between all pairs of cities. This matrix grows quadratically with the number of cities. 
7. Topological sort : Graph algorithm used to find the strongly connected sub graphs in a directed graph. To get the frequency of orders from a particular destination. [View code here]( https://github.com/Varuni387/Amazon.github.io/blob/main/Codes/topologicalSorting.cpp){:target="_blank"}<br><br>
The time complexity of topological sort is O(V + E), where V is the number of vertices and E is the number of edges in the graph. This is because the algorithm needs to visit each vertex and each edge in the graph in order to perform the topological sort.

The space complexity of topological sort is O(V), where V is the number of vertices in the graph. This is because the algorithm needs to maintain a data structure to keep track of the vertices that have been visited and their topological order.
8. Max heap : A heap data structure where child nodes are lesser than the parent node. Cart management can use this data structure. The heap can be created based on how many times customer visited the product site. [View code here]( https://github.com/Varuni387/Amazon.github.io/blob/main/Codes/maxHeap.cpp){:target="_blank"}<br><br>
The time complexity of building a max heap is O(n), where n is the number of elements in the heap. This is because we need to iterate through each element in the heap and perform heapify operations to maintain the max heap property.

The space complexity of building a max heap is O(1) because we are not using any additional space that grows with the input size. The heap is built in place by rearranging the elements in the array.
9. Edit distance : This is dynamic problem which gives the number of minimum operations required to make two strings equal. This can be used to provide better recommendations and helps in spell check as well.[View code here]( https://github.com/Varuni387/Amazon.github.io/blob/main/Codes/editDistance.cpp){:target="_blank"}<br><br>
The time complexity of calculating the edit distance between two strings using dynamic programming is O(m*n), where m and n are the lengths of the two strings. This is because we need to fill in a 2D table of size (m+1) x (n+1) to store the intermediate results of the subproblems.

The space complexity is also O(m*n) because we need to store the entire 2D table. However, it is possible to optimize the space complexity to O(min(m,n)) by only storing two rows of the table at a time, as we only need the results from the previous row to calculate the current row.
10. Linked list : This is a linear data structure, here it can be used to just store the payment history which we cannot fetch using any key. [View code here]( https://github.com/Varuni387/Amazon.github.io/blob/main/Codes/addAtEnd.cpp){:target="_blank"}<br><br>
Insertion at the beginning of the linked list:
   - Time complexity: O(1)
   - Space complexity: O(1)
   - This operation involves updating the pointers of the new node to point to the current head of the linked list and then updating the head pointer to point to the new node. Since this operation does not depend on the size of the linked list, the time complexity is constant.

Insertion at the end of the linked list:
   - Time complexity: O(n)
   - Space complexity: O(1)
   - In the worst case scenario, when inserting a new node at the end of the linked list, we need to traverse the entire list to reach the last node. Therefore, the time complexity is linear with respect to the size of the linked list.

Deletion of a node from the linked list:
   - Time complexity: O(n)
   - Space complexity: O(1)
   - Similar to insertion at the end, deletion of a node may require traversing the entire list to find the node to be deleted. Therefore, the time complexity is linear with respect to the size of the linked list.

Searching for a node in the linked list:
   - Time complexity: O(n)
   - Space complexity: O(1)
   - To search for a node in the linked list, we may need to traverse the entire list to find the desired node. Therefore, the time complexity is linear with respect to the size of the linked list.

Reversing a linked list:
   - Time complexity: O(n)
   - Space complexity: O(1)
   - Reversing a linked list involves changing the pointers of each node to point to the previous node. This operation requires traversing the entire list once, resulting in a linear time complexity.
