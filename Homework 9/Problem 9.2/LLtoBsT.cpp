/*
	CH-231-A
	hw9_p2c.cpp
	Matheas-Roland Borsos
	m.borsos@constructor.university
*/

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if (!head) return nullptr;
        vector<int> nums;
        while (head) {
            nums.push_back(head->val);
            head = head->next;
        }
        return buildBST(nums, 0, nums.size() - 1);
    }
    
    TreeNode* buildBST(vector<int>& nums, int start, int end) {
        if (start > end) return nullptr;
        int mid = start + (end - start) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = buildBST(nums, start, mid - 1);
        root->right = buildBST(nums, mid + 1, end);
        return root;
    }
    
    void printTree(TreeNode* root) {
        if (!root) return;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                TreeNode *node = q.front();
                q.pop();
                cout << node->val << " ";
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            cout << endl;
        }
    }
};

int main() {
    Solution s;
    ListNode *head = new ListNode(-10);
    head->next = new ListNode(-3);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(5);
    head->next->next->next->next = new ListNode(9);
    TreeNode *root = s.sortedListToBST(head);
    s.printTree(root);
    return 0;
}
