# 0x1A. C - Hash tables

# Introduction to Hash Tables
### What are Hash Tables?
A hash table is a data structure that allows efficient insertion, deletion, and search operations. It uses a hash function to compute an index into an array of buckets or slots, from which the desired value can be found. Hash tables are widely used in various applications due to their ability to provide fast access to data based on a unique key.

### Why Use Hash Tables?
Hash tables offer constant-time average-case performance for basic operations, making them suitable for tasks like data retrieval, storage, and management. They are particularly useful when you need to store large amounts of data and perform quick lookups based on a specific key.

# Basic Hash Table Implementation
### Hash Function
A hash function takes a key as input and computes an index or hash value. A good hash function distributes keys uniformly across the array of buckets, minimizing collisions. Collisions occur when two keys hash to the same index, and handling them effectively is crucial for hash table performance.

### Handling Collisions
There are various techniques to handle collisions:

- 1. Chaining: Each bucket contains a linked list of key-value pairs.
- 2. Open Addressing: When a collision occurs, search for the next open slot in the array.
- 2i. Linear Probing: Check the next slot.
- 2ii. Quadratic Probing: Check slots with quadratic intervals.
- 2iii. Double Hashing: Use a secondary hash function to determine the interval between probes.

# Hash Table Structure
A basic hash table structure consists of an array of buckets and key-value pairs. Each bucket can be a linked list for chaining or a slot for open addressing. Key-value pairs are stored in the buckets according to their hash values.

# Insertion and Retrieval Operations
- Insertion: Compute the hash value of the key, find the corresponding bucket, and insert the key-value pair.

- Retrieval: Compute the hash value of the key, locate the bucket, and search for the key to retrieve the associated value.

# Learning Objectives
### General
- What is a hash function
- What makes a good hash function
- What is a hash table, how do they work and how to use them
- What is a collision and what are the main ways of dealing with collisions in the context of a hash table
- What are the advantages and drawbacks of using hash tables
- What are the most common use cases of hash tables

# Project Requirements
### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are allowed to use the C standard library
- The prototypes of all your functions should be included in your header file called hash_tables.h
- Don’t forget to push your header file
- All your header files should be include guarded

# More Info
### Data Structures
Please use these data structures for this project:

```
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;
```
```
/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```
