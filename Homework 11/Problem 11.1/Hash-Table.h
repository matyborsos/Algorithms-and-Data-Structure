/* CH-231-A
   hm11_p1.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

class Node {
    public:
        int key;
        int value;
        Node(int key, int value);
};

class HashTable {
    private:
        Node **arr;
        int maxSize;
        int currentSize;
    public:
        HashTable();
        ~HashTable();
        int hashCode(int key);
        void insertNode(int key, int value);
        int get(int key);
        bool isEmpty();
        void printHashTable();
};