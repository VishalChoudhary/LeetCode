class BSTIterator {
public:
    stack<TreeNode*> st;
    bool reverse;

    // Constructor for BSTIterator
    BSTIterator(TreeNode* root, bool isReverse) {
        reverse = isReverse;
        while (root != NULL) {
            st.push(root);
            if (reverse)
                root = root->right; // For reverse, go to the right child
            else
                root = root->left;  // For normal order, go to the left child
        }
    }

    // Return the next element in the iterator
    int next() {
        TreeNode* curr = st.top();
        st.pop();
        if (reverse) {
            TreeNode* temp = curr->left;
            while (temp != NULL) {
                st.push(temp);
                temp = temp->right; // For reverse, push right child
            }
        } else {
            TreeNode* temp = curr->right;
            while (temp != NULL) {
                st.push(temp);
                temp = temp->left; // For normal order, push left child
            }
        }
        return curr->val;
    }
};

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if (root == NULL) return false; // Check if the tree is empty
        BSTIterator l(root, false); // Iterator for normal order
        BSTIterator r(root, true);   // Iterator for reverse order
        int i = l.next();            // First element
        int j = r.next();            // Last element

        while (i < j) {
            if (i + j == k) return true; // Found a pair
            else if (i + j < k) i = l.next(); // Move forward
            else j = r.next(); // Move backward
        }
        return false; // No pair found
    }
};