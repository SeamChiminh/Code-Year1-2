#include <iostream>
#include <stack>
#include <string>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
};

bool MathSymbol(char symbol) {
    switch (symbol) {
        case '+':
        case '-':
        case '*':
        case '/':
            return true;
        default:
            return false;
    }
}


Node* generateNode(char data) {
    Node* createdNode = new Node{data, nullptr, nullptr};
    return createdNode;
}

Node* generateExpressionTree(const string& traversal) {
    stack<Node*> stk;

    for (char symbol : traversal) {
        Node* createdNode = generateNode(symbol);

        if (MathSymbol(symbol)) {
            // Operator node
            createdNode->right = stk.top();
            stk.pop();
            createdNode->left = stk.top();
            stk.pop();
        }

        stk.push(createdNode);
    }

    Node* root = stk.top();
    stk.pop();

    return root;
}


void printInOrder(Node* root) {
    if (root != nullptr) {
        printInOrder(root->left);
        cout << root->data;
        printInOrder(root->right);
    }
}

int solveExpressionTree(Node* root) {
    if (root != nullptr) {
        if (!MathSymbol(root->data))
            return root->data - '0';

        int value1 = solveExpressionTree(root->left);
        int value2 = solveExpressionTree(root->right);

        switch (root->data) {
            case '+':
                return value1 + value2;
            case '-':
                return value1 - value2;
            case '*':
                return value1 * value2;
            case '/':
                return value1 / value2;
        }
    }

    return 0;
}

int main() {
//    string traversal = "532*+";
	string traversal;
	
	cout << "input : ";
	cin >> traversal;
    Node* root = generateExpressionTree(traversal);

    cout << "Infix Expression: ";
    printInOrder(root);
    cout << endl;

    int result = solveExpressionTree(root);
    cout << "Result: " << result << endl;

    return 0;
}