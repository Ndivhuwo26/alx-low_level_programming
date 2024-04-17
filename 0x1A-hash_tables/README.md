0x1A. C - Hash tables


In C, a hash table is typically implemented as an array of linked lists. Each element in the array is often referred to as a "bucket" or "slot". The index of an element in the array is determined by hashing the key of the data to be stored. Collisions, which occur when two different keys hash to the same index, are handled by chaining: each slot in the array contains a pointer to the head of a linked list, where elements with colliding keys are stored.

Hashing:
Hashing is the process of converting a key into a numeric value, known as a hash code or hash value, that represents the key's position in the hash table. The hash function should distribute keys evenly across the array to minimize collisions. Common hash functions include division hashing, multiplication hashing, and the popular DJB2 hash function.

Operations:
Insertion: To insert a key-value pair into the hash table, the key is hashed to determine its index in the array. If there's no collision at that index, a new node is created and inserted at that position. If there's a collision, the new node is appended to the linked list at that index.
Retrieval: To retrieve a value associated with a key, the key is hashed to find its index in the array. If the key is found at that index, the corresponding value is returned. If collisions occur, the linked list at that index is traversed to find the matching key.
Deletion: To delete a key-value pair, the key is hashed to find its index in the array. If the key is found at that index, the corresponding node is removed from the linked list. If collisions occur, the linked list at that index is traversed to find and remove the node containing the key.
Efficiency:
The efficiency of a hash table depends on the distribution of keys, the quality of the hash function, and the handling of collisions. In ideal cases, hash tables offer constant-time average-case performance for insertion, retrieval, and deletion. However, in the worst case (e.g., if all keys hash to the same index), the performance can degrade to O(n), where n is the number of elements in the hash table.

Applications:
Hash tables are widely used in various applications, including:

Databases (for indexing and querying)
Compilers and interpreters (for symbol tables)
Caches (for fast data retrieval)
Networking (for routing tables)
Implementing associative arrays and dictionaries
