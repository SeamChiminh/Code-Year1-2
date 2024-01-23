#include <iostream>
#include <stack>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
};

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

bool isOperand(char c) {
    return (c >= '0' && c <= '9');
}

Node* createNode(char data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* constructExpressionTreePreorder(string& preorder, int& index) {
    if (index >= preorder.length())
        return nullptr;

    Node* newNode = createNode(preorder[index++]);

    if (isOperator(newNode->data)) {
        newNode->left = constructExpressionTreePreorder(preorder, index);
        newNode->right = constructExpressionTreePreorder(preorder, index);
    }

    return newNode;
}

Node* constructExpressionTreeInorder(string& inorder, int start, int end) {
    if (start > end)
        return nullptr;

    stack<Node*> st;
    Node* root = nullptr;

    for (int i = start; i <= end; i++) {
        if (isOperand(inorder[i])) {
            Node* newNode = createNode(inorder[i]);
            st.push(newNode);
            root = newNode;
        } else if (isOperator(inorder[i])) {
            Node* newNode = createNode(inorder[i]);

            Node* right = st.top();
            st.pop();
            Node* left = st.top();
            st.pop();

            newNode->left = left;
            newNode->right = right;

            st.push(newNode);
            root = newNode;
        }
    }

    return root;
}

Node* constructExpressionTreePostorder(string& postorder, int& index) {
    if (index < 0)
        return nullptr;

    Node* newNode = createNode(postorder[index--]);

    if (isOperator(newNode->data)) {
        newNode->right = constructExpressionTreePostorder(postorder, index);
        newNode->left = constructExpressionTreePostorder(postorder, index);
    }

    return newNode;
}

int evaluateExpressionTree(Node* root) {
    if (root != nullptr) {
        if (isOperand(root->data))
            return root->data - '0';

        int leftValue = evaluateExpressionTree(root->left);
        int rightValue = evaluateExpressionTree(root->right);

        switch (root->data) {
            case '+':
                return leftValue + rightValue;
            case '-':
                return leftValue - rightValue;
            case '*':
                return leftValue * rightValue;
            case '/':
                return leftValue / rightValue;
        }
    }

    return 0;
}

int main() {
    string preorder = "*+23-74";
    int index = 0;
    Node* rootPreorder = constructExpressionTreePreorder(preorder, index);

    string inorder = "2+3*7-4";
    Node* rootInorder = constructExpressionTreeInorder(inorder, 0, inorder.length() - 1);

    string postorder = "23+74-*";
    index = postorder.length() - 1;
    Node* rootPostorder = constructExpressionTreePostorder(postorder, index);

    int resultPreorder = evaluateExpressionTree(rootPreorder);
    int resultInorder = evaluateExpressionTree(rootInorder);
    int resultPostorder = evaluateExpressionTree(rootPostorder);

    cout << "Result (Preorder): " << resultPreorder << endl;
    cout << "Result (Inorder): " << resultInorder << endl;
    cout << "Result (Postorder): " << resultPostorder << endl;

    return 0;
}