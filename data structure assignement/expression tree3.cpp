#include <iostream>
#include <stack>
using namespace std;

class Node 
{
	public:
	    char data;
	    Node* left;
	    Node* right;
	
	    Node(char value) 
		{
	        data = value;
	        left = nullptr;
	        right = nullptr;
	    }
};


bool MathSymbol(char symbol) 
{
    switch (symbol) 
	{
        case '+':
        case '-':
        case '*':
        case '/':
            return true;
        default:
            return false;
    }
}
	 
bool Numeric(char symbol) 
{
    return (symbol >= '0' && symbol <= '9');
}
	
int getWeight(char op) 
{
    int weight = -1;
    switch (op) 
	{
        case '+':
        case '-':
            weight = 1;
            break;
        case '*':
        case '/':
            weight = 2;
            break;
    }
    return weight;
}


bool hasHigherPrecedence(char op1, char op2) 
{
    int op1Weight = getWeight(op1);
    int op2Weight = getWeight(op2);
    return op1Weight >= op2Weight;
}

//???????????		
Node* generateExpressionTree(const string& infixExpression) 
{
    stack<Node*> NStack;
    stack<char> opStack;

    for (char symbol : infixExpression) 
	{
        if (Numeric(symbol)) 
		{
            Node* operandNode = new Node(symbol);
            NStack.push(operandNode);
        } 
		else if (MathSymbol(symbol)) 
		{
            while (!opStack.empty() && opStack.top() != '(' && hasHigherPrecedence(opStack.top(), symbol)) 
			{
                char oper = opStack.top();
                opStack.pop();

                Node* rightNode = NStack.top();
                NStack.pop();
                Node* leftNode = NStack.top();
                NStack.pop();

                Node* operatorNode = new Node(oper);
                operatorNode->left = leftNode;
                operatorNode->right = rightNode;

                NStack.push(operatorNode);
            }

            opStack.push(symbol);
        } 
        
		else if (symbol == '(') 
		{
            opStack.push(symbol);
        } 
        
		else if (symbol == ')') 
		{
            while (!opStack.empty() && opStack.top() != '(') 
			{
                char oper = opStack.top();
                opStack.pop();

                Node* rightNode = NStack.top();
                NStack.pop();
                Node* leftNode = NStack.top();
                NStack.pop();

                Node* operatorNode = new Node(oper);
                operatorNode->left = leftNode;
                operatorNode->right = rightNode;

                NStack.push(operatorNode);
            }

            if (!opStack.empty() && opStack.top() == '(') {
                opStack.pop();
            }
        }
    }

    while (!opStack.empty()) 
	{
        char oper = opStack.top();
        opStack.pop();

        Node* rightNode = NStack.top();
        NStack.pop();
        Node* leftNode = NStack.top();
        NStack.pop();

        Node* operatorNode = new Node(oper);
        operatorNode->left = leftNode;
        operatorNode->right = rightNode;

        NStack.push(operatorNode);
    }

    return NStack.top();
}

int solveExpression(Node* node) 
{
    if (node == nullptr) 
	{
        return 0;
    }

    if (Numeric(node->data)) 
	{
        return node->data - '0';
    }

    int value1 = solveExpression(node->left);
    int value2 = solveExpression(node->right);

    switch (node->data) 
	{
        case '+':
            return value1 + value2;
        case '-':
            return value1 - value2;
        case '*':
            return value1 * value2;
        case '/':
            return value1 / value2;
        default:
            return 0;
    }
}

void inorderTraversal(Node* node) 
{
    if (node == nullptr) 
	{
        return;
    }

    if (MathSymbol(node->data)) 
	{
        cout << "(";
    }

    inorderTraversal(node->left);
    cout << node->data << " ";
    inorderTraversal(node->right);

    if (MathSymbol(node->data)) 
	{
        cout << ")";
    }
}

void preorderTraversal(Node* node) 
{
    if (node == nullptr) 
	{
        return;
    }

    cout << node->data << " ";
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}

void postorderTraversal(Node* node) 
{
    if (node == nullptr) 
	{
        return;
    }

    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout << node->data << " ";
}

int main() 
{
	//ex: infixExpression = "((2+3)*4)-5";
    string infixExpression;
    

	cout << "Input Infix Expression : ";
	cin >> infixExpression;
	
	Node* root = generateExpressionTree(infixExpression);
	

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;

    int result = solveExpression(root);
    cout << "Result: " << result << endl;

    return 0;
}