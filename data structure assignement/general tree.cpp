#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Node structure for the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Helper function to construct binary tree from pre-order and in-order traversals
Node* constructBinaryTree(vector<int>& preorder, vector<int>& inorder, int preStart, int preEnd, int inStart, int inEnd, unordered_map<int, int>& indexMap) {
    if (preStart > preEnd || inStart > inEnd) {
        return nullptr;
    }

    int rootData = preorder[preStart];
    Node* root = new Node(rootData);

    int rootIndex = indexMap[rootData];
    int leftSubtreeSize = rootIndex - inStart;

    root->left = constructBinaryTree(preorder, inorder, preStart + 1, preStart + leftSubtreeSize, inStart, rootIndex - 1, indexMap);
    root->right = constructBinaryTree(preorder, inorder, preStart + leftSubtreeSize + 1, preEnd, rootIndex + 1, inEnd, indexMap);

    return root;
}

// Function to create a binary tree from pre-order and in-order traversals
Node* createBinaryTree(vector<int>& preorder, vector<int>& inorder) {
    int n = preorder.size();
    unordered_map<int, int> indexMap;

    // Create a map to store the indices of elements in the inorder traversal
    for (int i = 0; i < n; i++) {
        indexMap[inorder[i]] = i;
    }

    return constructBinaryTree(preorder, inorder, 0, n - 1, 0, n - 1, indexMap);
}

// Depth-first traversal (pre-order)
void depthFirstPreOrderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }

    cout << root->data << " ";
    depthFirstPreOrderTraversal(root->left);
    depthFirstPreOrderTraversal(root->right);
}

// Depth-first traversal (in-order)
void depthFirstInOrderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }

    depthFirstInOrderTraversal(root->left);
    cout << root->data << " ";
    depthFirstInOrderTraversal(root->right);
}

// Depth-first traversal (post-order)
void depthFirstPostOrderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }

    depthFirstPostOrderTraversal(root->left);
    depthFirstPostOrderTraversal(root->right);
    cout << root->data << " ";
}

int main() {
    // Given pre-order and in-order traversal results
     vector<int> preorder = {1, 2, 4, 5, 3, 6, 7,8,9};
    vector<int> inorder = {4, 2, 5, 1, 6, 3, 7,8,9};

    // Create binary tree from pre-order and in-order traversals
    Node* root = createBinaryTree(preorder, inorder);

    // Perform depth-first traversal (pre-order)
    cout << "traversal (pre-order): ";
    depthFirstPreOrderTraversal(root);
    cout << endl;

    // Perform depth-first traversal (in-order)
    cout << "traversal (in-order): ";
    depthFirstInOrderTraversal(root);
    cout << endl;

    // Perform depth-first traversal (post-order)
    cout << "traversal (post-order): ";
    depthFirstPostOrderTraversal(root);
    cout << endl;

    return 0;
}