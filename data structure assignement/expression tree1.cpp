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

Node* createNode(char data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

Node* constructExpressionTreeInorder(string& inorder, int start, int end) {
    if (start > end)
        return nullptr;

    int minIndex = INT_MAX;
    char minChar;

    for (int i = start; i <= end; i++) {
        if (isOperator(inorder[i])) {
            if (isOperator(minChar) && (inorder[i] == '*' || inorder[i] == '/'))
                continue;
            minChar = inorder[i];
            minIndex = i;
        }
    }

    Node* newNode = createNode(inorder[minIndex]);
    newNode->left = constructExpressionTreeInorder(inorder, start, minIndex - 1);
    newNode->right = constructExpressionTreeInorder(inorder, minIndex + 1, end);
    return newNode;
}

int evaluateExpressionTree(Node* root) {
    if (root != nullptr) {
        if (!isOperator(root->data))
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

int calculateInfixExpression(string& expression) {
    string inorder = "";  // in-order traversal result
    int start = 0;
    int end = expression.length() - 1;
    Node* root = constructExpressionTreeInorder(inorder, start, end);
    int result = evaluateExpressionTree(root);
    return result;
}

int main() {
    string expression = "5+3*2";
    int result = calculateInfixExpression(expression);
    cout << "Result: " << result << endl;

    return 0;
}