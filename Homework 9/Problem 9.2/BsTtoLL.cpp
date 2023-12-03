/*
	CH-231-A
	hw9_p2b.cpp
	Matheas-Roland Borsos
	m.borsos@constructor.university
*/

#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* convertBSTtoLinkedList(TreeNode* root) {
        if (!root) return NULL;
        ListNode *leftHead = convertBSTtoLinkedList(root->left);
        ListNode *rightHead = convertBSTtoLinkedList(root->right);
        ListNode *node = new ListNode(root->val);
        if (leftHead) {
            ListNode *leftTail = leftHead;
            while (leftTail->next) {
                leftTail = leftTail->next;
            }
            leftTail->next = node;
            node->next = rightHead;
            return leftHead;
        } else {
            node->next = rightHead;
            return node;
        }
    }
};

int main() {
    Solution s;
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    ListNode *head = s.convertBSTtoLinkedList(root);
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
    return 0;
}