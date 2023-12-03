/* CH-231-A
   hm10_p2.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>

enum Color {RED, BLACK};

struct Node {
    int data;
    Color color;
    Node *left, *right, *parent;
};

class RedBlackTree {
    private:
        Node *root;

        Node *NIL;
        void createNILNode(Node *node, Node *parent);

        // Methods to read the Red Black Tree recursively from a given node
        void preOrderTraversalRecursive(Node *x);
        void inOrderTraversalRecursive(Node *x);
        void postOrderTraversalRecursive(Node *x);

        // Methods to modify the Red Black Tree
        void transplant(Node *u, Node *v);
        void insertFixUp(Node *z);
        void deleteNode(Node *node, int key);
        void deleteFixUp(Node *x);
        // Method to search the Red Black Tree recursively from a given node
        Node* searchTreeRecursive(Node *x, int key);

    protected:
        // Methods to rotate a node of the Red Black Tree
        void rotateLeft(Node *x);
        void rotateRight(Node *y);

    public:
        // Constructor
        RedBlackTree();

        // Method to insert element with data property key into Red Black Tree
        void insertRB(int);
        // Method to remove element with data property key from Red Black Tree
        void deleteRB(int);
        // Methods to find predecessor and successor of node x in Red Black Tree
        Node* predecessor(const Node *x);
        Node* successor(const Node *x);
        // Methods to find minimum and maximum node in Red Black Tree
        Node* getMinimum();
        Node* getMaximum();
        // Method to search for a given key inside the Red Black Tree
        Node* search(int key);

        // Methods to read the Red Black Tree from the root
        void preOrder();
        void inOrder();
        void postOrder();

        // Method to find the minimum of the subtree at given node x
        Node* minimum(Node *x);
        // Method to find the maximum of the subtree at given node x
        Node* maximum(Node *x);
};