# binary_trees

## Objectives

	. To understand binary trees
    . Differentiate between a binary tree and a Binary Search Tree
    . understand the different traversal methods to go through a binary tree
    and types of binary trees

## Requirements

	. Editors: vi, vim, emacs
	. Ubuntu 20.04 LTS and gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
	. Betty style compliant code. It will be checked using betty-style.pl and betty-doc.pl
	. No global variables
	. No more than 5 functions per file
	. The only C standard library functions allowed are printf, malloc, free and exit.
    . The prototypes of all functions be included in your header file called binary_trees.h

## Data structure

### Basic Binary Tree

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};


## Description of files in the repository

    . 0-binary_tree_node.c
    . 1-binary_tree_insert_left.c
    .
